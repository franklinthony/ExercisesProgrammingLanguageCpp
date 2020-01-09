#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H

#include <string>
#include "Trabalhador.h"

class TrabalhadorAssalariado : public Trabalhador{

	public:
		TrabalhadorAssalariado();
		TrabalhadorAssalariado(std::string nome, float salario);
		double calcularPagamentoSemanal(int horasSemanais);
};

#endif