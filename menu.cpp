#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int opc, numero;
	float cubo, resultadoCubo = 0, parImpar;
	
	cout<<"Bienvenido a este menu de operaciones"<<endl;
	cout<<"1. Sacar cubo a un numero"<<endl;
	cout<<"2. Numero positivo o negativo"<<endl;
	cout<<"3. Numero par o impar"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"\nOpcion: "; cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite el numero: "; cin>>cubo;
			resultadoCubo = cubo*cubo*cubo;
			cout<<"El resultado es: "<<resultadoCubo;
			break;
		case 2:
			cout<<"Digite el numero: "; cin>>parImpar;
			if(parImpar==0){
				cout<<"El numero es 0";
			}
			else if(parImpar>0){
				cout<<"Numero positivo";
			}
			else{
				cout<<"Numero negativo";
			}
			break;
		case 3:
			cout<<"Ingrese un numero: "; cin>>numero;
			if(numero==0){
		        cout<<"el numero es 0";
        	}
        	else if(numero%2==0){
	        	cout<<"El numero es par";
         	}
        	else{
         		cout<<"El numero es impar";
	        }
	        break;
		case 4:
			cout<<"Gracias por utilizar";
			break;
	}
	
	return 0;
}
