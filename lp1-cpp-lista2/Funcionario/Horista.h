#ifndef HORISTA_H
#define HORISTA_H

#include "Funcionario.h"

class Horista : public Funcionario{

	private:
		double salarioPorHora;
		double horasTrabalhadas;
		double horaExtra;

	public:
		Horista(std::string nome, int matricula, double salarioPorHora,
				double horasTrabalhadas);
		double calcularSalario(); // Calculando salario mensal
		double getSalarioPorHora();
		double getHorasTrabalhadas();
		double getHoraExtra();
		void setSalarioPorHora(double salarioPorHora);
		void setHorasTrabalhadas(double horasTrabalhadas);
		void print();
};

#endif