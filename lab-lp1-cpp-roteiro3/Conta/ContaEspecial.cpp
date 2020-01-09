#include <string>
#include <iostream>
#include "ContaEspecial.h"

using namespace std;

ContaEspecial::ContaEspecial(string nomeCliente, int numero, double saldo, double salario) 
: ContaCorrente(nomeCliente, numero, saldo, salario){
}

double ContaEspecial::definirLimite(){

	return 4 * salario;
}

void ContaEspecial::print(){

	cout << "Nome do cliente: " << nomeCliente << endl
		<< "Numero da conta: " << numero << endl
		<< "Salario: R$ " << salario << endl
		<< "Saldo: R$ " << saldo << endl
		<< "Limite de saque: R$ " << definirLimite() << endl <<  endl;
}