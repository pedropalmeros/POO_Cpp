#include <iostream>
#include "perro.h"

using namespace std;

int main(){
	cout << "Se va a crear un Perro local" << endl; 
	Perro Pancho;

	cout << "Se va acrear un Perro en el heap" << endl; 
	Perro *Orejas = new Perro;

	cout << "Se borrará el Perro del heap" << endl; 
	delete Orejas;

	cout << "Fin del programa" << endl;

}