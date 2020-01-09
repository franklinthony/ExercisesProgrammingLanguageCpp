#ifndef TRIANGULO_H
#define TRIANGULO_H

#include "FiguraGeometrica.h"

class Triangulo : public FiguraGeometrica{

	private:
		float base;
		float altura;

	public:
		Triangulo();
		Triangulo(std::string nome, float base, float altura);
		float calcularArea();
		void print();
};

#endif