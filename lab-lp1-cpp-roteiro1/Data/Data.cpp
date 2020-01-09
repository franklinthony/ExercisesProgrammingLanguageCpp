#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(int dia, int mes, int ano){
		
	setDia(dia);
	setMes(mes);
	setAno(ano);
}

int Data::getDia(){

	return dia;
}

int Data::getMes(){

	return mes;
}
	
int Data::getAno(){	

	return ano;
}

void Data::setDia(int dia){

	if (dia < 1 || dia > 31){
		this->dia = 01;
	}
	else{
		this->dia = dia;
	}
}

void Data::setMes(int mes){

	if (mes < 1 || mes > 12){
		this->mes = 01;
	}
	else{
		this->mes = mes;
	}
}

void Data::setAno(int ano){

	if (ano < 0){
		this->ano = 0001;
	}
	else{
		this->ano = ano;
	}
}

void Data::avancarDia(){

	dia++;

	if (dia > 29 && mes == 2){
		dia = 1;
		mes++;
	}

	if ((dia > 30 && mes == 4) || (dia > 30 && mes == 6) || (dia > 30 && mes == 9)
		|| (dia > 30 && mes == 11)){
		dia = 1;
		mes++;
	}

	if ((dia > 31 && mes == 1) || (dia > 31 && mes == 3) || (dia > 31 && mes == 5)
		|| (dia > 31 && mes == 7) || (dia > 31 && mes == 8) || (dia > 31 && mes == 10)){
		dia = 1;
		mes++;
	}

	if (dia > 31 && mes == 12){
		dia = 1;
		mes = 1;
		ano++;
	}
}	

void Data::print(){

	cout << "Data: " << dia << "/" <<
		mes << "/" << ano << endl;
}