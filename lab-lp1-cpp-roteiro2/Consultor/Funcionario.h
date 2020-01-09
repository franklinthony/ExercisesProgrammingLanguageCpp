#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>

class Funcionario{

	protected:
		int matricula;
		std::string nome;
		float salario;

	public:
		Funcionario();
		int getMatricula();
		std::string getNome();
		virtual float getSalario();
		virtual float getSalario(float percentual);
		void setMatricula(int matricula);
		void setNome(std::string nome);
		void setSalario(float salario);
		void print();
};

#endif