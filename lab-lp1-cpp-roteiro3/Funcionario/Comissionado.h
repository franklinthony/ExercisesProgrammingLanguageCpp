#ifndef COMISSIONADO_H
#define COMISSIONADO_H

#include "Funcionario.h"

class Comissionado : public Funcionario{

	private:
		double salarioBase;
		double vendasSemanais;
		double percentualComissao;

	public:
		Comissionado(std::string nome, int matricula, double salarioBase, 
					 double vendasSemanais, double percentualComissao);
		double calcularSalario(); // Calculando salario mensal
		double getSalarioBase();
		double getVendasSemanais();
		double getPercentualComissao();
		void setSalarioBase(double salarioBase);
		void setVendasSemanais(double vendasSemanais);
		void setPercentualComissao(double percentualComissao);
		void print();
};

#endif