#include <iostream>
#include "perro.h"

using namespace std;

int main(){

	cout << "Se crea un perro en en el Heap" << endl; 
	Perro *PerroHeap01 = new Perro;

	(*PerroHeap01).asignarNombre("Orejas");
	PerroHeap01->asignarEdad(7);
	(*PerroHeap01).imprimirInfo();
	PerroHeap01->imprimirInfo();

	delete PerroHeap01;

}