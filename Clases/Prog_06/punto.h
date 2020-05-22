#include <iostream>

using namespace std;

class Punto{
private:
	float x;
	float y;
public:
	Punto();
	Punto(float val_x, float val_y);
	void asignarX(float val_x);
	float obtenerX();
	void asignarY(float val_y);
	float obtenerY();
	void asignarXY(float val_x, float val_y);
	void mostrarCoordenadas();
};

//Constructor predeterminado
Punto::Punto(){}

// Constructor definido por usuario
// Construye e inicializa al punto
Punto::Punto(float val_x, float val_y){
	x = val_x;
	y = val_y;
}

void Punto::asignarX(float val_x){
	x = val_x;
}

float Punto::obtenerX(){
	return x;
}


void Punto::asignarY(float val_y){
	y = val_y;
}

float Punto::obtenerY(){
	return y;
}

void Punto::asignarXY(float val_x, float val_y){
	asignarX(val_x);
	asignarY(val_y);
}

void Punto::mostrarCoordenadas(){
	cout << "Coordenada en x: " << x << endl;
	cout << "Coordeanda en y: " << y << endl;
}