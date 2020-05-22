// Muestra de la declaración de una clase y la definción de los métodos de la clase.

#include <iostream> 

using namespace std;

class Gato{
    public:
        int ObtenerEdad();
        void AsignarEdad(int Edad);
        void Maullar();
    private:
        int suEdad;
};


// ObtenerEdad, método de acceso público
// regresa el valor de la propiedad suEdad
int Gato::ObtenerEdad(){
    return suEdad;
}

// AsingarEdad, método de acceso público
// da un valor a la propiedad suEdad
void Gato::AsignarEdad(int edad){
    suEdad = edad;
}

// Definición del método Maullar
// regresa: void
// parámetros: Ninguno
// acción: Imprime "miau" en la pantalla
void Gato::Maullar()
{
    cout << "Miau.\n";
}