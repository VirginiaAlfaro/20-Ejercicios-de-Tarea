//ingresar la cantidad de notas de un estudiente, el programa finalizara
//hasta que se ingrese una nota negativa, el programa mostrara el promedio
//y sumatoria de los numeros ingresados.
#include <iostream>
using namespace std;
int main(){
    int nota, suma=0, cont=0;
    float promedio;
    cout<<"ingrese la nota: ";
    cin>>nota;
    while(nota>=0){
        suma=suma+nota;
        cont++;
        cout<<"ingrese la nota: ";
        cin>>nota;
    }
    promedio=suma/cont;
    cout<<"el promedio es: "<<promedio<<endl;
    cout<<"la suma es: "<<suma<<endl;
    return 0;
}
