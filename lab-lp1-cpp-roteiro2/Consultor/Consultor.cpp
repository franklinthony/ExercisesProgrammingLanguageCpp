#include "Consultor.h"

Consultor::Consultor() : Funcionario(){
}

float Consultor::getSalario(){

	salario += salario * 0.10;
}

float Consultor::getSalario(float percentual){

	salario += salario * percentual;
}