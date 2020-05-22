#include <iostream>

using namespace std;


class motor
{
private:
	int EnA;
	int Giro_A;
	int Giro_B;

public:
	motor(int EnA, int Giro_A, int Giro_B);
	void paro();
	void GiroDerecha();
	void GiroIzquierda();
};