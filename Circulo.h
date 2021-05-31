#ifndef Circulo_h
#define	Circulo_h
#include "Formas.h"

class Circulo : public Formas
{
private:
	float diametro;
	float raio;
	const float pi = 3.14;

public:
	Circulo(float diametro);

	void CalculaArea();
	void detalhes();
};

#endif

