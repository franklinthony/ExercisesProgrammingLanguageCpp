#include <string>
#include <iostream>
#include "Funcionario.h"

using namespace std;

Funcionario::Funcionario(){
}

int Funcionario::getMatricula(){

	return matricula;
}

string Funcionario::getNome(){

	return nome;
}

float Funcionario::getSalario(){
}

float Funcionario::getSalario(float percentual){
}

void Funcionario::setMatricula(int matricula){

	this->matricula = matricula;
}

void Funcionario::setNome(string nome){

	this->nome = nome;
}

void Funcionario::setSalario(float salario){

	this->salario = salario;
}

void Funcionario::print(){

	cout << "Nome: " << nome << endl << "Matricula: "
		<< matricula << endl << "Salario: R$ " << salario << endl << endl;
}