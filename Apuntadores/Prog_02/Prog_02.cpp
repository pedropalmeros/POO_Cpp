#include <iostream>

using namespace std;

int main(){
	
	int miVar = 8;
	int * miPtr = NULL;
	miPtr = &miVar;

	cout << "El valor de miVar es: " << miVar << endl; 
	cout << "La dirección de miVar es: " << &miVar << endl;
	cout << "El valor de miPtr es: " << miPtr << endl; 
	
}