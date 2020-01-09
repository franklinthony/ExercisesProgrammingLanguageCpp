#include <iostream>
#include <string>
#include "Despesa.h"

using namespace std;

Despesa::Despesa(){
}

Despesa::Despesa(double valor, string tipo){

	setValor(valor);
	setTipo(tipo);
}

double Despesa::getValor(){

	return valor;
}

string Despesa::getTipo(){

	return tipo;
}

void Despesa::setValor(double valor){

	this->valor = valor;
}

void Despesa::setTipo(string tipo){

	this->tipo = tipo;
}

