#ifndef MEDICO_H
#define MEDICO_H

#include <string>

class Medico{

	protected:
		std::string nome;
		std::string nomeEspecializacao;
		double altura;
		double peso;

	public:
		Medico();
		virtual void procedimentoEspecifico();
		std::string getNome();
		std::string getNomeEspecializacao();
		double getAltura();
		double getPeso();
		void setNome(std::string nome);
		void setNomeEspecializacao(std::string nomeEspecializacao);
		void setAltura(double altura);
		void setPeso(double peso);
		void print();
};

#endif