#include "Circulo.h"

Circulo::Circulo(float diametro)
{
	this->diametro = diametro;
	CalculaArea();
}

void Circulo::CalculaArea()
{
	float area;
	raio = diametro / 2;

	area = pi * (raio * raio);
	setArea(area);
}

void Circulo::detalhes()
{
	cout << "\n";
	cout << "Circulo" << endl;
	cout << "Diametro....: " << diametro << endl;
	cout << "Raio........: " << raio << endl;
	cout << fixed;
	cout.precision(2);
	cout << "Area....: " << getArea() << " cm quadrados" << endl;
}
