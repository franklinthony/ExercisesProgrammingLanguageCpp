#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include "Funcionario.h"
#include "FuncionarioNaoExisteException.h"

class SistemaGerenciaFolha{

	private:
		Funcionario *funcionarios[3];
		int i = 0;

	public:
		SistemaGerenciaFolha();
		void setFuncionarios(Funcionario *funcionario);
		double calculaValorTotalFolha();
		double consultaSalarioFuncionario(std::string nome);
};

#endif