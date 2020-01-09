#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include <string>
#include "Despesa.h"

#define NUM_MAX 50

class ControleDeGastos{

private:
	Despesa despesas[NUM_MAX];

public:
	ControleDeGastos();
	void setDespesa(Despesa despesa, int posicao);
	double calculaTotalDeDespesas();
	bool existeDespesaDoTipo(std::string tipo);
	void print();
};

#endif