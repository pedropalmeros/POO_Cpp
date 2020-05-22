#include <iostream>

using namespace std;

int main(){
	int Numero1 = 1027;
	int & rNumero1 = Numero1;

	cout << "El valor de  Numero1 es: " <<  Numero1 << endl; 
	cout << "El valor de rNumero1 es: " << rNumero1 << endl; 

	cout << "La dirección de  Numero1 es: " <<  &Numero1 << endl; 
	cout << "La dirección de rNumero1 es: " << &rNumero1 << endl; 

	int Numero2 = -50;

	rNumero1 = Numero2;

	cout << "El valor de  Numero1 es: " <<  Numero1 << endl; 
	cout << "El valor de rNumero1 es: " << rNumero1 << endl;
	cout << "El valor de  Numero2 es: " <<  Numero2 << endl;

	cout << "La dirección de  Numero1 es: " <<  &Numero1 << endl; 
	cout << "La dirección de rNumero1 es: " << &rNumero1 << endl; 
	cout << "La dirección de  Numero2 es: " <<  &Numero2 << endl;

}