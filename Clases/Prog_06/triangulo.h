#include <iostream>
#include "punto.h"

using namespace std;

class Triangulo{
private:
	Punto A;
	Punto B;
	Punto C;
public:
	void asignarA(float val_x,float val_y);
	void asignarB(float val_x,float val_y);
	void asignarC(float val_x,float val_y);
	void mostrarCoordenadas();
};

void Triangulo::asignarA(float val_x,float val_y){
	A.asignarXY(val_x,val_y);
}

void Triangulo::asignarB(float val_x,float val_y){
	B.asignarXY(val_x,val_y);
}

void Triangulo::asignarC(float val_x,float val_y){
	C.asignarXY(val_x,val_y);
}


void Triangulo::mostrarCoordenadas(){
	cout << "Las coordenadas del punto A son: " << endl;
	A.mostrarCoordenadas();
	cout << endl << "Las coordenadas del punto B son: " << endl; 
	B.mostrarCoordenadas();
	cout << endl << "Las coordenadas del punto C son: " << endl; 
	C.mostrarCoordenadas();
}