#ifndef Triangulo_h
#define	Triangulo_h
#include "Formas.h"

class Triangulo : public Formas
{
private:
	float b;
	float h;

public:
	Triangulo(float b, float h);

	void CalculaArea();
	void detalhes();
};

#endif
