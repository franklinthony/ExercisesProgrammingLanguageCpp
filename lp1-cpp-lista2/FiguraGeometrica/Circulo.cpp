#include <string>
#include <iostream>
#include "Circulo.h"
#include <math.h>

#define pi 3.14

using namespace std;

Circulo::Circulo(){
}

Circulo::Circulo(string nome, float raio) : FiguraGeometrica(nome){

	this->raio = raio;
}

float Circulo::calcularArea(){

	return pi * pow(raio, 2);
}

void Circulo::print(){

	cout << "Nome da figura geometrica: " << nome << endl
		<< "Area do " << nome << ": " << calcularArea()
		<< " cm²" << endl << endl;
}