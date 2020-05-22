#include <iostream>

using namespace std; 

int main(){
	int miVariable = 8;
	float residuo = 69.7;
	double parametro = -6585.74;

	cout << "El valor de miVariable es: " << miVariable << endl;
	cout << "La dirección de miVariable es: " << &miVariable << endl; 
	cout << "-------------" << endl << endl; 

	cout << "El valor de residuo es: " << residuo << endl;
	cout << "La dirección de residuo es: " << &residuo << endl; 
	cout << "-------------" << endl << endl; 

	cout << "El valor de parametro es: " << parametro << endl;
	cout << "La dirección de parametro es: " << &parametro << endl; 
	cout << "-------------" << endl << endl; 
}