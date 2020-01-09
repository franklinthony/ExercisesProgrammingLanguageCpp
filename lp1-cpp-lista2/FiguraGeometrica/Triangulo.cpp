#include <string>
#include <iostream>
#include "Triangulo.h"

using namespace std;

Triangulo::Triangulo(){
}

Triangulo::Triangulo(string nome, float base, float altura) : FiguraGeometrica(nome){

	this->base = base;
	this->altura = altura;
}

float Triangulo::calcularArea(){

	return (base * altura) / 2;
}

void Triangulo::print(){

	cout << "Nome da figura geometrica: " << nome << endl
		<< "Area do " << nome << ": " << calcularArea()
		<< " cm²" << endl << endl;
}