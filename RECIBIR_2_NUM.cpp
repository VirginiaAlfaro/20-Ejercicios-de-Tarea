#include<iostream>
using namespace std;
int main(){
	float num1, num2;
	int opcion;
	float resultado;
	cout<<"Ingrese el primer n\xa3mero: \n";
	cin>>num1;
	cout<<"Ingrese el segundo n\xa3mero: \n";
	cin>>num2;
	
	cout<<"Operaciones matem\xa0ticas \n";
	cout<<"\n1.-Suma";
	cout<<"\n2.-Resta";
	cout<<"\n3.-Multiplicacion";
	cout<<"\n4.-Division";
	cin>>opcion;
	
	switch (opcion){
		case 1:
			//Realizar la operacion suma;
		resultado=num1+num2;
		cout<<"\n La suma es: "<<resultado<<endl;
		break;
		
		case 2:
			//Realizar la resta;
		resultado=num1-num2;
		cout<<"\n La resta es: "<<resultado<<endl;
		break;
		
		case 3:
			//Realizar la multiplicacion;
		resultado=num1*num2;
		cout<<"\n La multiplicacion es: "<<resultado<<endl;
		break;
		
		case 4:
			//Si num2 es distinto de 0, entonces;
		if(num2 !=0){
			//Realizar la division;
			resultado= num1/num2;
		cout<<"\n La division es: "<<resultado<<endl;
		break;
	}
	    else{
	    	//Mostrar división por 0 no es válida;
	    cout<<"\n La division por 0 no es válida"<<endl;
		}
		break;
		
		default://En caso que ninguna opción se cumpla;
		cout<<"\n Opcion seleccionada incorrecta"<<endl;
		
	}
	system("pause");
	return 0;
}
