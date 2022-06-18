//desarrollar un programa que solicite una serie de numeros y al ingresar
//0 finalice, al terminar que muestre cual fue el nuemero mayor ingresado.
#include <iostream>
using namespace std;
int main(){
    int num, mayor, cont=0;
    cout<<"Ingrese un numero: ";
    cin>>num;
    while(num!=0){
        if(cont==0){
            mayor=num;
        }
        if(num>mayor){
            mayor=num;
        }
        cont++;
        cout<<"Ingrese un numero: ";
        cin>>num;
    }
    cout<<"El numero mayor es: "<<mayor<<endl;
    return 0;
}
