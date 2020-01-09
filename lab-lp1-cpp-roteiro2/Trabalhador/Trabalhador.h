#ifndef TRABALHADOR_H
#define TRABALHADOR_H

#include <string>

class Trabalhador{

	protected:
		std::string nome;
		float salario;
		int horaExtra;
		float valorDaHora;

	public:
		Trabalhador();
		Trabalhador(std::string nome, float salario);
		virtual double calcularPagamentoSemanal(int horasSemanais);
		std::string getNome();
		float getSalario();
		float getValorDaHora();
		int getHoraExtra();
};

#endif