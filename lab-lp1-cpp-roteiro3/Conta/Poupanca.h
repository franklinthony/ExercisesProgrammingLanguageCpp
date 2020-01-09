#ifndef POUPANCA_H
#define POUPANCA_H

#include <string>
#include "Conta.h"

class Poupanca : public Conta{

	private:
		int variacao;
		double taxaRendimento;

	public:
		Poupanca(std::string nomeCliente, int numero, double saldo, int variacao, double taxaRendimento);
		void sacar(double valor);
		void depositar(double valor);
		double render();
		int getVariacao();
		double getTaxaRendimento();
		void setVariacao(int variacao);
		void setTaxaRendimento(double taxaRendimento);
		void print();
};

#endif