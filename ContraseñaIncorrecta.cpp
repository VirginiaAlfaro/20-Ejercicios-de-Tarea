#include<iostream>
using namespace std;
int main(){
	//String es para utilizar letras y números
	int contra=142006;
	int password;
		cout<<"Ingrese su contrasena: "<<endl;
		cin>>password;
			for (int i=1; i<5; i++){
		if(password == contra){
		cout<<"CONTRASENA CORRECTA, Besitosss :-*"<<endl;
		break;
		}
		else{
			cout<<"CONTRASENA INCORRECTA...NO PUEDES CHISMOSEAR,favor ingresar nuevamente: \n";
			cin>> password;
		}if(i==4){
			cout<<"Haz realizado 5 intentos,Tu telefono ha sido bloqueado "<<endl;
		}
		}
		
	return 0;
}
	
