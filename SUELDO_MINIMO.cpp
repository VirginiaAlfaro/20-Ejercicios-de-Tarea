#include<iostream>
using namespace std;
int main(){
	int sueldo;
	int sueldominimo=13000;
	
	cout<<"Ingrese su sueldo: "<<endl;
	cin>>sueldo;
	
	if(sueldo>=sueldominimo){
		cout<<"Gana mas del sueldo minimo"<<endl;
	}else{
		cout<<"Gana menos del sueldo minimo ;("<<endl;
	}
	return 0;
	
}
	
