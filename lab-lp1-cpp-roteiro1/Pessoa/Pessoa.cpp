#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(string nome){

	setNome(nome);	
}

Pessoa::Pessoa(string nome, int idade, string telefone){

	setNome(nome);
	setIdade(idade);
	setTelefone(telefone);
}

string Pessoa::getNome(){

	return nome;
}

string Pessoa::getTelefone(){

	return telefone;
}

int Pessoa::getIdade(){

	return idade;
}

void Pessoa::setNome(string nome){

	this->nome = nome;
}

void Pessoa::setTelefone(string telefone){

	this->telefone = telefone;
}

void Pessoa::setIdade(int idade){

	if (idade < 1){
		this->idade = 1;
	}
	else{
		this->idade = idade;
	}
}

void Pessoa::print(){

	cout << "Nome: " << nome << endl << "Idade: " 
		<< idade << endl << "Telefone: " << telefone << endl << endl;
}



