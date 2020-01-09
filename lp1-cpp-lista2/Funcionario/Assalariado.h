#ifndef ASSALARIADO_H
#define ASSALARIADO_H

#include "Funcionario.h"

class Assalariado : public Funcionario{

	private:
		double salario;

	public:
		Assalariado(std::string nome, int matricula, double salario);
		double calcularSalario(); // Calculando salario mensal
		double getSalario();
		void setSalario(double salario);
		void print();
};

#endif