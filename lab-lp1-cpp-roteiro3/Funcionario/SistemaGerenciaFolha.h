#ifndef SISTEMAGERENCIAFOLHA_H
#define SISTEMAGERENCIAFOLHA_H

#include "Funcionario.h"
#include "FuncionarioNaoExisteException.h"
#include "OrcamentoEstouradoException.h"

class SistemaGerenciaFolha{

	private:
		Funcionario *funcionarios[3];
		int i = 0;
		double orcamentoMaximo;

	public:
		SistemaGerenciaFolha(double orcamentoMaximo);
		void setFuncionarios(Funcionario *funcionario);
		double calculaValorTotalFolha();
		double consultaSalarioFuncionario(std::string nome);
};

#endif