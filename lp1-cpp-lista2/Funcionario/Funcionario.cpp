#include <string>
#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario(){
}

string Funcionario::getNome(){

	return nome;
}

int Funcionario::getMatricula(){

	return matricula;
}

void Funcionario::setNome(std::string nome){

	this->nome = nome;
}

void Funcionario::setMatricula(int matricula){

	this->matricula = matricula;
}

void Funcionario::print(){
}