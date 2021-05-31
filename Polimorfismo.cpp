#include "Retangulo.h"
#include "Triangulo.h"
#include "Circulo.h"

int main()
{
	Retangulo Q(2, 3);
	Triangulo T(3, 5);
	Circulo C(7);

	Q.detalhes();
	T.detalhes();
	C.detalhes();

	return 0;
}