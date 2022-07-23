#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <windows.h>


#include "mis_funciones.h"


int opc=0;

void Ingresar()
{
  TextColor(12);  
  Rectangle(20,8,40,12,"%"); 
  
  SetColorA(2,22);  
  Say(28,10,"*** INGRESAR DATOS ***");
  int tec=getch();
  opc=0;
}

void Modificar()
{
  TextColor(12);  
  Rectangle(20,8,40,12,"*"); 
  
  SetColorA(2,22);  
  Say(28,10,"*** MODIFICAR DATOS ***");
  int tec=getch();
  opc=0;
}


void Eliminar()
{
  TextColor(12);  
  Rectangle(20,8,40,12,":"); 
  
  SetColorA(2,22);  
  Say(28,10,"*** ELIMINAR DATOS ***");
  int tec=getch();
  opc=0;
}



MENU miMenu;

int main(int argc, char *argv[])
{
  bool Salir=false;
  
  miMenu.Add_Items("1. Agregar  ",1);	
  miMenu.Add_Items("2. Modificar",2);	
  miMenu.Add_Items("3. Eliminar ",3);	
  miMenu.Add_Items("4. Salir    ",4);	
  
  miMenu.Set_Space(2);


do{
	TextColor(10);
	Say(13,2,"C++ Programa desarrollado por Lucio Ramirez - Peru 2018");
	Say(19,3,"<< Todos los Derechos son de Libre Uso >>");
	
	if(opc==0)
		{
		SetColorB(2,19);  
		Rectangle(20,8,40,12,"#"); 
		SetColorA(2,22);  
		Say(28,10,"*** MENU PRINCIPAL ***");
  		opc=miMenu.Draw(33,12);
	    }	
  				
   switch (opc) 
	  {     
			
			case 1:
			   Cls();
			   Ingresar();
			break;
			   
			case 2:
				Cls();
				Modificar();
			break;
			
			case 3:
				Cls();
				Eliminar();
			break;
			
			case 4:
				//MSGBOX("Gracias por su Tiempo....","Hasta la Vista...."); 
				Salir=true;
			break;
			
	  }
  

}while(Salir==false);
  
  return 0;
;
	
	

}
