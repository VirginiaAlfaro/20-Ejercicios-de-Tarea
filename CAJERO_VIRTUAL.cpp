#include<iostream>
using namespace std;
int main(){
	int opcion;
	cout<<"Seleccione la operacion que quiere realizar \n";
	cout<<"1. Ingresar dinero en cuenta\t2.Retirar dinero de la cuenta\t3. Salir \n";
	cin>>opcion;
	
	switch(opcion){
case 1:
	int cuenta;
	cout<<"Ingrese cuanto dinero quiere Ingresar en cuenta: \n";
	cin>>cuenta;
	break;
	
case 2:
	int retirar;
	cout<<"Ingrese cuanto dinero desea retirar de la cuenta: \n";
	cin>>retirar;
	break;
	
case 3:
	cout<<"GRACIAS \n";
	break;
return 0;
}
}
