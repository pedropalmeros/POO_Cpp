/***********************************************************
*	Definición y declaración de una clase
*
* Observación: si trata de compilar este programa 
* marcará error, debido a que está tratando de ingresar
* a elementos privados de la clase desde la función main
* Autor: Pedro Flores
***********************************************************/

#include <iostream>

class Felino{
    int Edad;
    int Peso;;
};

int main(){
    Gato Pantera;
    Pantera.Edad = 5;
    std::cout << "Pantera es un gato que tiene: " << Pantera.suEdad;
    std::cout << " anios de edad" << std::endl;
    return 0; 
}