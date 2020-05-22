// Muestra de la declaración de una clase  y de la declaración de un objeto de esa clase
#include <iostream>

class Felino{
    public:
    int Edad;
    int Peso;
};

int main(){
    Felino Pantera;
    Pantera.Edad = 5;
    std::cout << "Pantera es un gato que tiene: " << Pantera.Edad;
    std::cout << " anios de edad" << std::endl;
    return 0; 
}