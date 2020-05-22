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
};

Perro::Perro(){
	cout << "Se ha llamado al constructor" << endl;
	Edad = 1;
	Nombre = "perro";
}

Perro::~Perro(){
	cout << "Se ha llamado al destructor" << endl; 
}