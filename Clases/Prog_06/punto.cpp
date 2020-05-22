#include <iostream>
#include "punto.h"

using namespace std;

int main(){
	Punto A;
	Punto B(1,0);
	cout << "Las coordenadas del punto A son: " << endl; 
	A.mostrarCoordenadas();
	cout << endl << "Las coordenadas del punto B son: " << endl;
	B.mostrarCoordenadas();
}

