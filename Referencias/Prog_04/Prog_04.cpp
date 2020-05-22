#include <iostream>
#include <string>

using namespace std; 

class Robot{
private:
	string Name;
	string Procesador = "Arduino";

public:
	Robot(string Nombre){
		this->Name = Nombre;
		}

	void Saludar(){
		cout << "Hola mi nombre es " << this->Name << endl; 
	}

	void Descripcion(){
		cout << "Tengo un@ " << this->Procesador << " como procesador" << endl; 
	}
};

int main(){
	Robot R2D2("R2D2");
	Robot & refR2D2 = R2D2;

	R2D2.Saludar();
	refR2D2.Saludar();
	refR2D2.Descripcion();
}