#include<iostream>
using namespace std;
int main(){
	int opcion;
	cout<<"Seleccione la conversion que desea realizar: \n";
	cout<<"1. GB a MG.\n";
	cout<<"2. MB a KB.\n";
	cout<<"3. KB a byte.\n";
	cout<<"4. Salir.\n";
	cin>> opcion;
	
	switch (opcion){
		case 1: 
		int Gb, producto1;
		cout<<"Haz sleccionado GB a MG, ingrese los GB: \n";
		cin>> Gb;
		producto1= Gb * 1024;
		cout<<"El resultado en MB es: "<<producto1 <<"MB.\n";
		break;
		case 2: 
		int Mb, producto2;
		cout<<"Haz seleccionado MB a KB, ingrese los MB: \n";
		cin>> Mb;
		producto2= Mb * 1024;
		cout<<"El resultado en KB es: "<<producto2 <<"KB.\n";
		break;
		case 3: 
		int Kb, producto3;
		cout<<"Haz seleccionado KB a byte, ingrese los KB: \n";
		cin>> Kb;
		producto3= Kb * 1024;
		cout<<"El resultado en byte es: "<<producto3 <<"byte.\n";
		break;
		default: 
		cout<<"Valor invalido\n";
		break;
		
}
	return 0;
}
