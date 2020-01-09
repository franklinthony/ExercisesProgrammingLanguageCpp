#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

int main(){

	FiguraGeometrica *t1 = new Triangulo("Triangulo", 1.45, 4.25);
	FiguraGeometrica *q1 = new Quadrado("Quadrado", 2);
	FiguraGeometrica *c1 = new Circulo("Circulo", 1.5);
	
	t1->calcularArea();
	t1->print();

	q1->calcularArea();
	q1->print();

	c1->calcularArea();
	c1->print();

	delete t1;
	delete q1;
	delete c1;

	return 0;
}