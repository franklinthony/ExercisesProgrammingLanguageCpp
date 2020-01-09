#include <iostream>
#include <string>
#include "Poupanca.h"

using namespace std;

Poupanca::Poupanca(string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento)
: Conta(nomeCliente, numero, saldo){

	setVariacao(variacao);
	setTaxaRendimento(taxaRendimento);
}

void Poupanca::sacar(double valor){

	if(valor <= saldo){
		saldo -= valor;
	}
	else{
		cout << "Saldo indisponivel" << endl;
	}
}

void Poupanca::depositar(double valor){

	saldo += valor;
}

double Poupanca::render(){

	double renda = 0;

	if (variacao == 51){
		renda = saldo * (taxaRendimento / 100);
	}	
	else if (variacao == 1){
		renda = saldo * ((taxaRendimento / 100) + ((taxaRendimento / 100) * (0.5 / 100)));
	}
	return renda;
}

int Poupanca::getVariacao(){

	return variacao;
}

double Poupanca::getTaxaRendimento(){

	return taxaRendimento;
}

void Poupanca::setVariacao(int variacao){

	this->variacao = variacao;
}

void Poupanca::setTaxaRendimento(double taxaRendimento){

	this->taxaRendimento = taxaRendimento;
}

void Poupanca::print(){

	cout << "Nome do cliente: " << nomeCliente << endl
		<< "Numero da conta: " << numero << endl
		<< "Variacao: " << variacao << endl
		<< "Taxa de rendimento: " << taxaRendimento << "%" << endl
		<< "Rendimento: R$ " << render() << endl
		<< "Saldo: R$ " << saldo << endl << endl;
}