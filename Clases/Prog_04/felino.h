// Muestra de la declaración de una clase y la definción de los métodos de la clase.

#include <iostream> 

using namespace std;

class Felino{
    public:
    	Felino(int edad);
        int ObtenerEdad()const;
        void AsignarEdad(int Edad);
        void Maullar();
        ~Felino();
    private:
        int Edad;
};

Felino::Felino(int edad){
	cout << "Construyendo un felino de: " << edad << " anios de edad" << endl; 
	Edad = edad;
}

// ObtenerEdad, método de acceso público
// regresa el valor de la propiedad Edad
int Felino::ObtenerEdad()const{
    return Edad;
}

// AsingarEdad, método de acceso público
// da un valor a la propiedad Edad
void Felino::AsignarEdad(int edad){
    Edad = edad;
}

// Definición del método Maullar
// regresa: void
// parámetros: Ninguno
// acción: Imprime "miau" en la pantalla
void Felino::Maullar()
{
    cout << "Miau.\n";
}

Felino::~Felino(){
    cout << "Felino ya se va a destruir" << endl; 
}