#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include <string>
#include "Conta.h"

class ContaCorrente : public Conta{

	protected:
		double salario;

	public:
		ContaCorrente(std::string nomeCliente, int numero, double saldo, double salario);
		double definirLimite();
		void sacar(double valor);
		void depositar(double valor);
		double getSalario();
		void setSalario(double salario);
		void print();
};

#endif