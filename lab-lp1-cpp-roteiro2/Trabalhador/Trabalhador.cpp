#include <string>
#include "Trabalhador.h"

using namespace std;

Trabalhador::Trabalhador(){
}

Trabalhador::Trabalhador(string nome, float salario){

	this->nome = nome;
	this-> salario = salario;
	horaExtra = 0;
	valorDaHora = 0;
}

double Trabalhador::calcularPagamentoSemanal(int horasSemanais){
}

string Trabalhador::getNome(){

	return nome;
}

float Trabalhador::getSalario(){

	return salario;
}

float Trabalhador::getValorDaHora(){

	return valorDaHora;
}

int Trabalhador::getHoraExtra(){

	return horaExtra;
}