#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta{

	protected:
		std::string nomeCliente;
		int numero;
		double saldo;

	public:
		Conta(std::string nomeCliente, int numero, double saldo);
		virtual void sacar(double valor) = 0;
		virtual void depositar(double valor) = 0;
		std::string getNomeCliente();
		int getNumero();
		double getSaldo();
		void setNomeCliente(std::string nomeCliente);
		void setNumero(int numero);
		void setSaldo(double saldo);
		void print();
};

#endif