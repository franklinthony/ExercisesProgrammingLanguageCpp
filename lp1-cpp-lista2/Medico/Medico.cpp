#include <string>
#include <iostream>
#include "Medico.h"

using namespace std;

Medico::Medico(){
}

void Medico::procedimentoEspecifico(){

	cout << "Realizando procedimento qualquer..." << endl << endl;
}

std::string Medico::getNome(){

	return nome;
}

std::string Medico::getNomeEspecializacao(){

	return nomeEspecializacao;
}

double Medico::getAltura(){

	return altura;
}

double Medico::getPeso(){

	return peso;
}

void Medico::setNome(string nome){

	this->nome = nome;
}

void Medico::setNomeEspecializacao(string nomeEspecializacao){

	this->nomeEspecializacao = nomeEspecializacao;
}

void Medico::setAltura(double altura){

	this->altura = altura;
}

void Medico::setPeso(double peso){

	this->peso = peso;
}

void Medico::print(){

	cout << "Nome do médico: " << nome << endl
		<< "Especialidade: " << nomeEspecializacao << endl
		<< "Altura: " << altura << " m" << endl
		<< "Peso: " << peso << " kg" << endl;
}