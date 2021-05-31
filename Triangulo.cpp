#include "Triangulo.h"

Triangulo::Triangulo(float b, float h)
{
	this->b = b;
	this->h = h;
	CalculaArea();
}

void Triangulo::CalculaArea()
{
	float resultado;
	resultado = (b * h) / 2;
	setArea(resultado);
}

void Triangulo::detalhes()
{
	cout << "Triangulo:" << endl;
	cout << "Valores...........: b" << " = " << b << " - h = " << h << endl;
	cout << "Area Resultado....: " << getArea() << "cm quadrados" << endl;
}
