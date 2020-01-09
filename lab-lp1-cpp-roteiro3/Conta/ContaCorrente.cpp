#include <string>
#include <iostream>
#include "ContaCorrente.h"

using namespace std;

ContaCorrente::ContaCorrente(string nomeCliente, int numero, double saldo, double salario)
: Conta(nomeCliente, numero, saldo){

	setSalario(salario);
}

double ContaCorrente::definirLimite(){

	return 2 * salario;
}

void ContaCorrente::sacar(double valor){

	if(valor <= saldo){
		saldo -= valor;
	}
	else{
		cout << "Saldo indisponivel" << endl;
	}
}

void ContaCorrente::depositar(double valor){

	saldo += valor;
}

double ContaCorrente::getSalario(){

	return salario;
}

void ContaCorrente::setSalario(double salario){

	this->salario = salario;
}

void ContaCorrente::print(){

	cout << "Nome do cliente: " << nomeCliente << endl
		<< "Numero da conta: " << numero << endl
		<< "Salario: R$ " << salario << endl
		<< "Saldo: R$ " << saldo << endl
		<< "Limite de saque: R$ " << definirLimite() << endl <<  endl;
}



