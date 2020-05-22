#include <iostream>
#include "felino.h"

int main(){
    Felino Pantera(8);
    std::cout << "Pantera tiene ";
    std::cout << Pantera.ObtenerEdad() << " anios de edad" << std::endl; 

    Pantera.AsignarEdad(5);
    std::cout << "Pantera tiene ";
    std::cout << Pantera.ObtenerEdad() << " anios de edad" << std::endl; 
   
}