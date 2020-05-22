#include <iostream>

using namespace std;

int main(){
	int A = 7;
	int B = 155;
	int C = -97;

	int *ptrA = &A;

	cout << "ptrA está apuntando a A y el valor de *ptrA es: " << *ptrA << endl; 
	*ptrA = -978;
	cout << "Se ha cambiando el valor de *ptrA, se cambia el valor de A: " << *ptrA << endl;

	ptrA = &B;

	cout << "ptrA está apuntando a B y el valor de *ptrA es: " << *ptrA << endl; 
	

	const int * ptrB = &B;

	cout << "ptrB está apuntando a B y el valor de *ptrB es: " << *ptrB << endl;


	// Si se descomenta maracara error
	//*ptrB = -1;
	//cout << "se ha cambiado *ptrB, ahora B vale: " << *ptrB << endl;  

	int * const ptrC = &C;

	cout << "ptrC apunta a C" << endl; 
	cout << "Se quiere cambiar el apuntador: " << endl;

	ptrC = &A;




}