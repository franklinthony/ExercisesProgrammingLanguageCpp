#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include <string>

class FiguraGeometrica{

	protected:
		std::string nome;

	public:
		FiguraGeometrica();
		FiguraGeometrica(std::string nome);
		virtual float calcularArea() = 0;
		virtual void print();
};

#endif