#include <string>
#include <iostream>
#include "TrabalhadorPorHora.h"

using namespace std;

TrabalhadorPorHora::TrabalhadorPorHora(){
}

TrabalhadorPorHora::TrabalhadorPorHora(std::string nome, float valorDaHora){

	this->nome = nome;
	this->valorDaHora = valorDaHora;
	salario = 0;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){

	float salarioSemanal = 0;

	if (horasSemanais <= 40){
		salarioSemanal = horasSemanais * valorDaHora;
		salario = salarioSemanal * 4;
	}
	else if (horasSemanais > 40){
		horaExtra = horasSemanais - 40;
		salarioSemanal = (40 * valorDaHora) + (horaExtra * (1.5 * valorDaHora)); 
	}
	salario = salarioSemanal * 4;
	return salarioSemanal;
}