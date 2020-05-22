#include <iostream>

using namespace std;

int main(void){
	int Dato = 100;
	int * ptrDato = &Dato;

	int Valor = 0;

	cout << "La dirección de Dato es: " << &Dato << endl;
	cout << "El valor de Dato es: " << Dato << endl; 

	cout << "El valor de ptrDato es: " << ptrDato;
	cout << "El valor de la memoria a la que apunta ptrDato es: " << *ptrDato << endl;

	cout << "El valor de Valor es: " << Valor << endl; 

	Valor = *ptrDato;

	cout << "El nuevo valor de Valor es: " << Valor << endl; 

	*ptrDato = 58;

	cout << "El nuevo valor de Dato es: " << Dato << endl; 
}