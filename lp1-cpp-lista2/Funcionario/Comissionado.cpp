#include <iostream>
#include "Comissionado.h"

using namespace std;

Comissionado::Comissionado(string nome, int matricula, double salarioBase, 
					 double vendasSemanais, double percentualComissao){

	this->nome = nome;
	this->matricula = matricula;
	this->salarioBase = salarioBase;
	this->vendasSemanais = vendasSemanais;
	this->percentualComissao = percentualComissao;
}

double Comissionado::calcularSalario(){

	double salarioComBonus = 0;

	salarioComBonus = salarioBase + vendasSemanais * (percentualComissao / 100);

	return salarioComBonus;
}

double Comissionado::getSalarioBase(){

	return salarioBase;
}

double Comissionado::getVendasSemanais(){

	return vendasSemanais;
}

double Comissionado::getPercentualComissao(){

	return percentualComissao;
}

void Comissionado::setSalarioBase(double salarioBase){

	this->salarioBase = salarioBase;
}

void Comissionado::setVendasSemanais(double vendasSemanais){

	this->vendasSemanais = vendasSemanais;
}

void Comissionado::setPercentualComissao(double percentualComissao){

	this->percentualComissao = percentualComissao;
}

void Comissionado::print(){

    cout << "Comissionado" << endl
        << "Nome: " << nome << endl
        << "Matricula: " << matricula << endl
        << "Salario base: R$ " << salarioBase << endl
        << "Vendas semanais: R$ " << vendasSemanais << endl
        << "Percentual de comissao: " << percentualComissao << "%" << endl
        << "Salario mensal: R$ " << calcularSalario() << endl << endl;
}