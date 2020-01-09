#include <iostream>
#include <string>
#include <sstream>
#include "Endereco.h"

using namespace std;

Endereco::Endereco(){
}

Endereco::Endereco(string rua, int numero, string bairro, string cidade, string estado, string cep){

	this->rua = rua;
	this->numero = numero;
	this->bairro = bairro;
	this->cidade = cidade;
	this->estado = estado;
	this->cep = cep;
}

string Endereco::toString(){

	stringstream resumo;

	resumo << "Rua " << rua << ", no. " << numero 
		<< ", " << bairro << ", " << cidade
		<< ", " << estado << ", " << cep;

	return resumo.str();
}