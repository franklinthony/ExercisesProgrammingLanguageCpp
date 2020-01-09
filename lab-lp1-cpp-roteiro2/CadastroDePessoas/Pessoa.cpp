#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(string nome){

	setNome(nome);
}

Pessoa::Pessoa(string nome, Endereco endereco, string telefone){
	
	setNome(nome);
	setEndereco(endereco);
	setTelefone(telefone);
}

string Pessoa::getNome(){

	return nome;
}

string Pessoa::getTelefone(){

	return telefone;
}

Endereco Pessoa::getEndereco(){

	return endereco;
}

void Pessoa::setNome(string nome){

	this->nome = nome;
}

void Pessoa::setTelefone(string telefone){

	this->telefone = telefone;
}

void Pessoa::setEndereco(Endereco endereco){

	this->endereco = endereco;
}

