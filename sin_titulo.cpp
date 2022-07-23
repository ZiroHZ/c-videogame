#include <iostream>
#include <cstdlib> //libreria para limpiar pantalla
#include<ctime>

using namespace std;

void GuionCombate(){
	
	cout<<"--------------------------------"<<endl;
	
}
void HUD(int lvl, string username,int life){
	
	cout<<"Nivel = "<<lvl<<"   "<<"username = "<<username<<"   "<<"Vida = "<<life<<endl<<endl;
}
	
void HUDEnemy(string a, int HP){
	
	cout<<"Enemigo = "<<a<<"   "<<"vida = "<<HP<<endl<<endl;
	
}
	
void delay(int secs) {
	
	for(int i = (time(NULL) + secs); time(NULL) != i; time(NULL));
	
}
void EleccionDoble(string a, string b){
	
	
	cout<<"a."<<a<<"          "<<"b."<<b<<endl;
	
}

	
int AtaquePlayer(int danio, int & HPEnemy){ //jugador ataca
	int danio_ramdom;
	
	srand(time(NULL)); //semilla PC
	danio_ramdom=(rand()%10 + (rand()/10) %10) + danio; //Danio ramdom = ultima semilla + semilla/10 ultima semilla
	
	
	cout<<"Daño realizado: "<<danio_ramdom<<endl;
	if(danio_ramdom>16)
		cout<<"Critico infligido"<<endl;
	
	
	HPEnemy-=danio_ramdom;  
	
	return 0;
}
		

int AtaqueEnemy(int danioEnemy, int & VidaPlayer){ //enemigo ataca
	int danio_ramdom;
	
	srand(time(NULL)); //semilla PC
	danio_ramdom=(rand()%10 + (rand()/10) %10) + danioEnemy; //Danio ramdom = ultima semilla + semilla/10 ultima semilla
	
	
	cout<<"Daño realizado por enemigo: "<<danio_ramdom<<endl;
	if(danio_ramdom>16)
		cout<<"Critico infligido"<<endl;
	
	
	VidaPlayer-=danio_ramdom;  
	
	return 0;
}
	
	

	
	
	
	
int main(int argc, char *argv[]) {

	int level=0, secs=2, vida=100;;
	string username;
	// system("color FA");  //cambiar fondo
	cout<<"Bienvenido al nivel: "<<level<<endl;
	
cout<<"Ingrese su nombre de usuario: ";
cin>>username;


	cout<<"Presiona ENTER para continuar: "<<endl;
	
	
	if(getchar()){
	system("cls");// para limpiar pantalla
	
	}
	else{cout<<"Presiona ENTER para continuar: "<<endl;}
	
	//entramos en el nivel 0
	
	HUD(level,username,vida); //Funcion para el HUD
	
	delay(secs);
	cout<<"Estamos en un campo lleno de trigo, "<<endl;
	delay(secs);
	cout<<"no sabes que hacer, estas aburrido, "<<endl;
	delay(secs);
	cout<<"rodeado de pastizales que no te generan nada, "<<endl;
	delay(secs);
	cout<<"la vida de campo es aburrida..."<<endl;
	delay(secs);
	cout<<"pero...";delay(secs);cout<<"pero...";delay(secs);
	cout<<"OH! Vaya..."<<endl;
	delay(secs);
	cout<<"Solo queria hacerte creer que algo estaba apunto de suceder."<<"Perdón."<<endl;
	delay(secs);
	cout<<endl<<endl<<"OH NO, UNA SERPIENTE DE PASTIZALES A APARECIDOO!!!!"<<endl;
	delay(secs);
	
	//combate 
	int danio=1;
	//vida 
	
	
	system("pause");
	if(getchar()){
		system("cls");// para limpiar pantalla
		
	}
	delay(secs);
	
	HUD(level,username,vida); //Funcion para el HUD
	
	//cout<<"Nivel = "<<level<<"   "<<"username = "<<username<<"   "<<"Vida = "<<vida<<endl<<endl;
	delay(secs);
	
	char eleccion;
	
	cout<<"Quieres usar una rama del suelo?"<<endl;
	EleccionDoble("Si","No");
	cin>>eleccion;
	
	
	
	while(eleccion!='a' and eleccion!='b'){
	cout<<"Quieres usar una rama del  suelo? (seleccione 'a' o 'b')"<<endl;
	EleccionDoble("Si","No");
	cin>>eleccion;
	}
	
	delay(secs);
	
	//eleccion combate serpiente
			if(eleccion=='a'){//En caso de que use la rama
				cout<<"Decides usar la rama"<<endl;
				danio=danio*3;
		
											}
				else{//si usa solo los puños
						cout<<"Decides usar los puños"<<endl;
						danio=danio*1;
							}
	
	delay(secs);
	
	
	//declaracion serpiente
	int HPSerpiente=12, DMGSerpiente=1;
	
	
	if(getchar()){
		system("cls");// para limpiar pantalla
		
	}
	else{cout<<"Presiona ENTER para continuar: "<<endl;}
	
	//PELEA CONTRA SERPIENTE
	
	while(vida>0 and HPSerpiente>0){
		
		HUD(level,username,vida); //Funcion para el HUD
		HUDEnemy("Serpiente", HPSerpiente); //funcion para el HUD enemigo - Serpiente lvl.1
		
		GuionCombate();
		cout<<"Atacas a la serpiente"<<endl; //ATACAS A LA SERPIENTE
		AtaquePlayer(danio,HPSerpiente);    //funcion atacar serpiente
		GuionCombate();
		
		GuionCombate();
		cout<<"Te ataca la serpiente"<<endl;//TE ATACA LA SERPIENTE
		AtaqueEnemy(DMGSerpiente,vida);    //funcion enemigo ataca a jugador
		GuionCombate();
		
		
		delay(secs);
		
		system("pause");
		if(vida>0 and HPSerpiente>0){
		system("cls");// para limpiar pantalla
    }
	}
	
	
	//FIN DEL COMBATE
	system("cls");
	HUD(level,username,vida); //Funcion para el HUD
	
	if(vida>0 and HPSerpiente<1){
		
		cout<<"Felicidades, has vencido a la Serpiente."<<endl; //GANADOR
	}
	else if(vida<1 and HPSerpiente>0){
		cout<<"Has perdido, vuelve a intentarlo."<<endl; //PERDEDOR
	}
	
	
	
	return 0;
}



