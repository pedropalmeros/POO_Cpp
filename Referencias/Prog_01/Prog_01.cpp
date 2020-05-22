#include <iostream>

using namespace std;

int main(){
	int miEntero;
	int  & ref_miEntero = miEntero;

	//Se modifica miEntero
	miEntero = 7;

	cout << "miEntero: " << miEntero << endl; 
	cout << "ref_miEntero: " << ref_miEntero << endl; 

	// Se modifica la referencia
	ref_miEntero = -100;

	cout << "miEntero: " << miEntero << endl; 
	cout << "ref_miEntero: " << ref_miEntero << endl; 

	return 0;
}