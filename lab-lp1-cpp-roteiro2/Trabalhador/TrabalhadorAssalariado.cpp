#include <string>
#include <iostream>
#include "TrabalhadorAssalariado.h"

using namespace std;

TrabalhadorAssalariado::TrabalhadorAssalariado(){
}

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, float salario)
: Trabalhador(nome, salario){
}

double TrabalhadorAssalariado::calcularPagamentoSemanal(int horasSemanais){

	float salarioSemanal = 0;

	salarioSemanal = salario / 4;
	
	return salarioSemanal;
}