#include <string>
#include <iostream>
#include "Quadrado.h"

using namespace std;

Quadrado::Quadrado(){
}

Quadrado::Quadrado(string nome, float lado) : FiguraGeometrica(nome){

	this->lado = lado;
}

float Quadrado::calcularArea(){

	return lado * lado;
}

void Quadrado::print(){

	cout << "Nome da figura geometrica: " << nome << endl
		<< "Area do " << nome << ": " << calcularArea()
		<< " cm²" << endl << endl;
}