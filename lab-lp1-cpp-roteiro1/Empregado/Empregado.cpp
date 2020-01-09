#include <iostream>
//#include <string>
#include "Empregado.h"

using namespace std;

Empregado::Empregado(std::string nome, std::string sobrenome, double salario){
	
	setNome(nome);
	setSobrenome(sobrenome);
	setSalario(salario);
}

string Empregado::getNome(){

	return nome;
}

string Empregado::getSobrenome(){

	return sobrenome;
}

double Empregado::getSalario(){

	return salario;
}

void Empregado::setNome(std::string nome){

	this->nome = nome;
}

void Empregado::setSobrenome(std::string sobrenome){

	this->sobrenome = sobrenome;
}

void Empregado::setSalario(double salario){

	if (salario < 0){
		this->salario = 0.0;
	}
	else{
		this->salario = salario;
	}
}

void Empregado::print(){

	cout << "Empregado: " << nome << " " << sobrenome
		<< endl << "Salario anual: R$ " << salario * 12
		<< endl << "Salario anual com aumento: R$ "
		<< (((salario * 10) / 100) + salario) * 12
		<< endl << endl; 
}





