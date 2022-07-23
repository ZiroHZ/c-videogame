#include <iostream>
#include <ctime>
using namespace std;

int main(int argc, char *argv[]) {
	
	int ramdom;
	system("color A0");
	srand(time(NULL));
	ramdom=rand()%10 + (rand()/10) %10;
	
	cout<<"---------------------"<<endl;
	cout<<ramdom<<endl;
	cout<<"---------------------"<<endl;
	if(ramdom>16)
		cout<<"Critico infligido"<<endl;
	else if(ramdom < 17){
		
		cout<<"No has infligido critico"<<endl;
		
	}
	/*
	
holaholanmhola golsadreynbjntgtg
	
	
	*/
	return 0;
}
