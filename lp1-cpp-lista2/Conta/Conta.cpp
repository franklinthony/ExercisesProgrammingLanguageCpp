#include <string>
#include <iostream>
#include "Conta.h"

using namespace std;

Conta::Conta(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo){

	setNomeCliente(nomeCliente);
	setSalarioMensal(salarioMensal);
	setNumeroConta(numeroConta);
	setSaldo(saldo);
}

void Conta::sacar(double valor){

	if (valor <= saldo){
		saldo = saldo - valor;	
	}
	else{
		cout << "Nome do cliente: " << nomeCliente << endl;
		throw SaldoNaoDisponivelException();
		cout << endl;
	}
}

void Conta::depositar(double valor){

	saldo = saldo + valor;
}

string Conta::getNomeCliente(){

	return nomeCliente;
}

double Conta::getSalarioMensal(){

	return salarioMensal;
}

string Conta::getNumeroConta(){

	return numeroConta;
}

double Conta::getSaldo(){

	return saldo;
}

double Conta::getLimite(){

	return limite;
}

void Conta::setNomeCliente(string nomeCliente){

	this->nomeCliente = nomeCliente;
}

void Conta::setSalarioMensal(double salarioMensal){

	this->salarioMensal = salarioMensal;
}

void Conta::setNumeroConta(string numeroConta){

	this->numeroConta = numeroConta;
}

void Conta::setSaldo(double saldo){

	this->saldo = saldo;
}

void Conta::setLimite(double limite){

	this->limite = limite;
}	

void Conta::definirLimite(){

	limite = 2 * salarioMensal;
}

void Conta::print(){

	cout << "Nome do cliente: " << nomeCliente << endl
		<< "No. da conta: " << numeroConta << endl
		<< "Salario mensal: R$ " << salarioMensal << endl
		<< "Limite de saque: R$ " << limite << endl
		<< "Saldo em conta: R$ " << saldo << endl << endl;
}