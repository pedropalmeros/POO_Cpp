#include <iostream>
#include <string>

using namespace std;

class Perro{
private:
	int Edad;
	string Nombre;

public:
	Perro();
	~Perro();
	void asignarEdad(int Edad);
	int obtenerEdad()const;
	void asignarNombre(string Nombre);
	string obtenerNombre()const;
	void ladrar();
	void imprimirInfo();
};

Perro::Perro(){
	cout << "Se ha llamado al constructor" << endl;
	this->Edad = 1;
	this->Nombre = "perro";
}

Perro::~Perro(){
	cout << "Se ha llamado al destructor" << endl; 
}

void Perro::asignarEdad(int Edad){ this->Edad = Edad; }
int Perro::obtenerEdad()const{ return this->Edad;}
void Perro::asignarNombre(string Nombre){ this->Nombre = Nombre;}
string Perro::obtenerNombre()const{return this->Nombre;}
void Perro::ladrar(){cout << "Grrrauuuu " << endl; }
void Perro::imprimirInfo(){
	cout << "El perro: " << this->Nombre << endl; 
	cout << "Tiene: " << this->Edad << " anios de edad" << endl;
}