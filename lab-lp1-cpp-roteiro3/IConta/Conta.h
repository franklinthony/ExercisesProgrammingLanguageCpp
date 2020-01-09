#ifndef CONTA_H
#define CONTA_H

#include <string>
#include "IConta.h"

class Conta : public IConta{
	
	protected:
		std::string nomeCliente;
		double salarioMensal;
		std::string numeroConta;
		double saldo;
		double limite;

	public:
		Conta(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo);
		virtual void sacar(double valor);
		virtual void depositar(double valor);
		
		std::string getNomeCliente();
		double getSalarioMensal();
		std::string getNumeroConta();
		double getSaldo();
		double getLimite();
		
		void setNomeCliente(std::string nomeCliente);
		void setSalarioMensal(double salarioMensal);
		void setNumeroConta(std::string numeroConta);
		void setSaldo(double saldo);
		void setLimite(double limite);
		
		void definirLimite();	
		void print();
};

#endif