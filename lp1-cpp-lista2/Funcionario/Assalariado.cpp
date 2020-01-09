#include <iostream>
#include <string>
#include "Assalariado.h"

using namespace std;

Assalariado::Assalariado(string nome, int matricula, double salario){

	this->nome = nome;
	this->matricula = matricula;
	this->salario = salario;
}

double Assalariado::calcularSalario(){

	return salario;
}

double Assalariado::getSalario(){

	return salario;
}

void Assalariado::setSalario(double salario){

	this->salario = salario;
}

void Assalariado::print(){
    
    cout << "Assalariado" << endl
    	<< "Nome: " << nome << endl
        << "Matricula: " << matricula << endl
        << "Salario mensal: R$ " << salario << endl << endl;
}