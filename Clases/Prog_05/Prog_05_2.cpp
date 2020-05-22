#include <iostream>
#include "felino.h"

int main(){
    Felino Pantera(8);
    std::cout << "-------------" << endl;
    std::cout << "Pantera tiene ";
    std::cout << Pantera.ObtenerEdad() << " anios de edad" << std::endl; 
    std::cout << "---------" << endl;
    std::cout << "Pantera tiene ";
    std::cout << Pantera.ObtenerEdad() << " anios de edad" << std::endl; 
    std::cout << "---------" << endl;
    std::cout << "Pantera tiene ";
    std::cout << Pantera.ObtenerEdad() << " anios de edad" << std::endl; 
    std::cout << "------------"<< endl;
   
}