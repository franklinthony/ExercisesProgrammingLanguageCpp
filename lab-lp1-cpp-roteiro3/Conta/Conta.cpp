#include <string>
#include <iostream>
#include "Conta.h"

using namespace std;

Conta::Conta(string nomeCliente, int numero, double saldo){

	setNomeCliente(nomeCliente);
	setNumero(numero);
	setSaldo(saldo);
}

string Conta::getNomeCliente(){

	return nomeCliente;
}

int Conta::getNumero(){

	return numero;
}

double Conta::getSaldo(){

	return saldo;
}

void Conta::setNomeCliente(string nomeCliente){

	this->nomeCliente = nomeCliente;
}

void Conta::setNumero(int numero){

	this->numero = numero;
}

void Conta::setSaldo(double saldo){

	this->saldo = saldo;
}

void Conta::print(){

	cout << "Realizando processamento bancario..." << endl;
}