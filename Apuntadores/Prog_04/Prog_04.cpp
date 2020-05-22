#include <iostream>

using namespace std; 

int main(){
	int miVariable = 8;
	int * apLocal = &miVariable;
	int * apHeap = new int;

	*apHeap = 90;
	cout << "El valor de miVariable es: " << miVariable << endl; 
	cout << "El valor al que apunto apLocal es: " << *apLocal << endl;
	cout << "El valor al que apunto apHeap es: "  << *apHeap << endl; 
	delete apHeap;


	int * apHeap_01 = new int;
	*apHeap_01 = 54;
	cout << "*apHeap_01: " <<  *apHeap_01<< endl;
	delete apHeap_01;
}