#ifndef Formas_h
#define	Formas_h
#include <iostream>

using namespace std;

class Formas
{
protected:
	float area;

public:
	Formas() {};

	void setArea(float area);
	float getArea();

	virtual void CalculaArea() = 0;


};


#endif

