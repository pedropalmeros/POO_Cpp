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
	void asignarEdad(int A);
	int obtenerEdad()const;
	void asignarNombre(string N);
	string obtenerNombre()const;
	void ladrar();
	void imprimirInfo();
};

Perro::Perro(){
	cout << "Se ha llamado al constructor" << endl;
	Edad = 1;
	Nombre = "perro";
}

Perro::~Perro(){
	cout << "Se ha llamado al destructor" << endl; 
}

void Perro::asignarEdad(int A){ Edad = A; }
int Perro::obtenerEdad()const{ return Edad;}
void Perro::asignarNombre(string N){ Nombre = N;}
string Perro::obtenerNombre()const{return Nombre;}
void Perro::ladrar(){cout << "Grrrauuuu " << endl; }
void Perro::imprimirInfo(){
	cout << "El perro: " << Nombre << endl; 
	cout << "Tiene: " << Edad << " anios de edad" << endl;
}