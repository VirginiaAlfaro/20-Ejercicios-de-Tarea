/*Desarrollar un programa que me muestre un menù que sea
1.encontrar el area de un triangulo.
2. encontrar el area de un rectangulo
3. encontrar el area de un circulo
4. salir*/
#include<iostream>
using namespace std;
int main(){
	int opcion;
	cout<<"Seleccione la operacion que quiere realizar \n";
	cout<<"1. area del triangulo\t2.area de un rectangulo\t3. area de un circulo \n";
	cin>>opcion;


switch(opcion){
case 1:
	float base1,altura1,area1;
cout<<"Ingrese la base del triangulo: \n";
cin>>base1;
cout<<"Ingrese la altura del triangulo: \n";
cin>>altura1;

area1 = (base1*altura1)/2;
cout<<"El area del triangulo es: "<<area1<<endl;
break;

case 2:
	float base,altura,area;
cout<<"Ingrese la base del rectangulo: \n";
cin>>base;
cout<<"Ingrse la altura del rectangulo: \n";
cin>>altura;

area =base*altura;
cout<<"El area del rectangulo es: "<<area<<endl;
break;

case 3: 
float radio,area3;
cout<<"Ingrese el radio del circulo: \n";
cin>>radio;

area3 =3.1416*radio*radio;
cout<<"El area del circulo es: "<<area3<<endl;
break;

default:
	cout<<"Valor incorrecto. \n";
break;
}
return 0;
}
	
