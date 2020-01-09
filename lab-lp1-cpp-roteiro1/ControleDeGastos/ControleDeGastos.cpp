#include <iostream>
#include <string>
#include "Despesa.h"
#include "ControleDeGastos.h"

#define NUM_MAX 50

using namespace std;

ControleDeGastos::ControleDeGastos(){

	for (int i = 0; i < NUM_MAX; i++){
		despesas[i].setValor(0);
		despesas[i].setTipo(" ");
	}
}

void ControleDeGastos::setDespesa(Despesa despesa, int posicao){

	despesas[posicao] = despesa;
}

double ControleDeGastos::calculaTotalDeDespesas(){

	double total = 0;

	for (int i = 0; i < NUM_MAX; i++){
		total += despesas[i].getValor();
	}
	return total;
}

bool ControleDeGastos::existeDespesaDoTipo(string tipo){

	double total = 0;

	for (int i = 0; i < NUM_MAX; i++){
		if (despesas[i].getTipo() == tipo){ // Em C++ pode ser '=='
			return true;
		}
	}
	return false;
}

void ControleDeGastos::print(){

	for (int i = 0; i < NUM_MAX; i++){
		if (despesas[i].getValor() > 0){
			cout << "Gasto #" << i + 1 << endl << "Valor: R$ "
			<< despesas[i].getValor() << endl << "Tipo: "
			<< despesas[i].getTipo() << endl << endl;
		}
	}
}


