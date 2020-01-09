#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario{

	protected:
		std::string nome;
		int matricula;

	public:
		Funcionario();
		virtual double calcularSalario() = 0;
		std::string getNome();
		int getMatricula();
		void setNome(std::string nome);
		void setMatricula(int matricula);
		virtual void print();
};

#endif