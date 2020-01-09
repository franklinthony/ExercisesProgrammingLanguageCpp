#include <string>
#include <iostream>
#include "Horista.h"

using namespace std;

Horista::Horista(string nome, int matricula, double salarioPorHora,
				double horasTrabalhadas){

	this->nome = nome;
	this->matricula = matricula;
	this->salarioPorHora = salarioPorHora;
	this->horasTrabalhadas = horasTrabalhadas;
}

double Horista::calcularSalario(){

	double salarioSemanal = 0;

	if (horasTrabalhadas <= 40){
		salarioSemanal = horasTrabalhadas * salarioPorHora;
	}
	else if (horasTrabalhadas > 40){
		horaExtra = horasTrabalhadas - 40;
		salarioSemanal = (40 * salarioPorHora) + (horaExtra * (1.5 * salarioPorHora));
	}
	return salarioSemanal * 4;
}

double Horista::getSalarioPorHora(){

	return salarioPorHora;
}

double Horista::getHorasTrabalhadas(){

	return horasTrabalhadas;
}

double Horista::getHoraExtra(){

	return horaExtra;
}

void Horista::setSalarioPorHora(double salarioPorHora){

	this->salarioPorHora = salarioPorHora;
}

void Horista::setHorasTrabalhadas(double horasTrabalhadas){

	this->horasTrabalhadas = horasTrabalhadas;
}

void Horista::print(){

    cout << "Horista" << endl
    	<< "Nome: " << nome << endl
        << "Matricula: " << matricula << endl
        << "Salario por hora: R$ " << salarioPorHora << endl
        << "Horas trabalhadas: " << horasTrabalhadas << endl
        << "Horas extras trabalhadas: " << horaExtra << endl 
        << "Salario mensal: R$ " << calcularSalario() << endl << endl;
}