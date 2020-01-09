#include <iostream>
#include "Horario.h"

using namespace std;

Horario::Horario(){
}

Horario::Horario(int hora, int minuto, int segundo){

	setHora(hora);
	setMinuto(minuto);
	setSegundo(segundo);
}

void Horario::avancarHorario(){

	segundo++;

	if (segundo > 59){
		segundo = 0;
		minuto++;
	}

	if (minuto > 59){
		minuto = 0;
		hora++;
	}

	if (hora > 23){
		hora = 0;
	}
}

int Horario::getHora(){

	return hora;
}

int Horario::getMinuto(){

	return minuto;
}

int Horario::getSegundo(){

	return segundo;
}

void Horario::setHorario(int hora, int minuto, int segundo){

	setHora(hora);
	setMinuto(minuto);
	setSegundo(segundo);
}

void Horario::setHora(int hora){

	if (hora < 0 || hora > 23)
		this->hora = 00;
	else
		this->hora = hora;
}

void Horario::setMinuto(int minuto){

	if (minuto < 0 || minuto > 59)
		this->minuto = 00;
	else
		this->minuto = minuto;
}

void Horario::setSegundo(int segundo){

	if (segundo < 0 || segundo > 59)
		this->segundo = 00;
	else
		this->segundo = segundo;
}

void Horario::print(){

	cout << "Hora: " << hora << ":" << minuto
		<< ":" << segundo << endl;
}
