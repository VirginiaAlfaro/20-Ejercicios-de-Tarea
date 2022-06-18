//Desarrollar un programa que solicite como dato de entrada el
//sueldo y realice el cálculo del IHSS, (si el sueldo es menor
//o igual a 9326 1ps, se multiplica por el 5%), pero si es
//mayor a 9326 lps se multiplica ese mismo valor (9326 1ps)5%. El programa deberá realizar el cálculo a por 10
//menos 20 empleados, de igual forma debe mostrar la suma de
//la deducción del IHSS de todos los empleados.
#include <iostream>
using namespace std;
int main(){
    int sueldo, ihss, suma;
    int i = 0;
    cout << "Ingrese el sueldo: ";
    cin >> sueldo;
    for (i = 0; i < 20; i++)
    {
    if (sueldo <= 9326){
        ihss = sueldo * 5 / 100;
    }
    else{
        ihss = (9326 * 5 / 100)* 5/100;
    }
    cout << "El IHSS es: " << ihss << endl;
    suma = ihss * 10 - 20;
    cout << "La suma de la deduccion es: " << suma << endl;
    return 0;
}
}
