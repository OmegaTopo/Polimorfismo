#ifndef Retangulo_h
#define	Retangulo_h
#include "Formas.h"

class Retangulo : public Formas
{
private:
	float b;
	float h;

public:
	Retangulo(float b, float h);

	void CalculaArea();
	void detalhes();
};

#endif 
