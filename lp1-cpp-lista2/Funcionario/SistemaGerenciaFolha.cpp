#include "SistemaGerenciaFolha.h"

using namespace std;

SistemaGerenciaFolha::SistemaGerenciaFolha(){
}

void SistemaGerenciaFolha::setFuncionarios(Funcionario *funcionario){

	funcionarios[i] = funcionario;
	i++;
}

double SistemaGerenciaFolha::calculaValorTotalFolha(){

	double valorTotal = 0;

	for (int i = 0; i < 3; i++){
		valorTotal += funcionarios[i]->calcularSalario();
	}
	return valorTotal;
}

double SistemaGerenciaFolha::consultaSalarioFuncionario(string nome){

	for (int i = 0; i < 3; i++){
		if (funcionarios[i]->getNome() == nome){
			return funcionarios[i]->calcularSalario();
		}
	}
	throw FuncionarioNaoExisteException();
}