#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H

#include <string>
#include "Conta.h"

class ContaEspecial : public Conta{

	public:
		ContaEspecial(std::string nomeCliente, double salarioMensal, std::string numeroConta, double saldo);
		void definirLimite();
};

#endif