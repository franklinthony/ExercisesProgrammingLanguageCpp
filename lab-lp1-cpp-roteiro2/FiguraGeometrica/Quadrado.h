#ifndef QUADRADO_H
#define QUADRADO_H

#include "FiguraGeometrica.h"

class Quadrado : public FiguraGeometrica{

	private:
		float lado;

	public:
		Quadrado();
		Quadrado(std::string nome, float lado);
		float calcularArea();
		void print();
};

#endif