#include <iostream>

using namespace std; 

int main(){
	int miEntero;
	int & ref_miEntero = miEntero;

	miEntero = -100;

	cout << "miEntero: " << miEntero << endl; 
	cout << "ref_miEntero" << ref_miEntero << endl; 

	cout << "La dirección de miEntero es: " << &miEntero << endl; 
	cout << "La dirección de ref_miEntero es: " << &miEntero << endl; 
}