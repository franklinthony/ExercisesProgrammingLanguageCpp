#ifndef CIRCULO_H
#define CIRCULO_H

#include "FiguraGeometrica.h"

class Circulo : public FiguraGeometrica{

	private:
		float raio;

	public:
		Circulo();
		Circulo(std::string nome, float raio);
		float calcularArea();
		void print();
};

#endif