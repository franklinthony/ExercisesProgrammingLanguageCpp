#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <string>
#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente{

	public:
		ContaEspecial(std::string nomeCliente, int numero, double saldo, double salario);
		double definirLimite();
		void print();
};

#endif