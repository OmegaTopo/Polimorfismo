#include "Retangulo.h"

Retangulo::Retangulo(float b, float h)
{
	this->b = b;
	this->h = h;
	CalculaArea();
}

void Retangulo::CalculaArea()
{
	float resultado;

	resultado = b * h;
	setArea(resultado);
}

void Retangulo::detalhes()
{
	cout << "\n";
	cout << "Retangulo" << endl;
	cout << "Base....: " << b << endl;
	cout << "Altura..: " << h << endl;
	cout << fixed;
	cout.precision(2);
	cout << "Area....: " << getArea() << " cm quadrados" << endl;
}