#include <iostream>
#include "Data.h"

using namespace std;

Data::Data(){
}

Data::Data(int dia, int mes, int ano){
		
	setDia(dia);
	setMes(mes);
	setAno(ano);
}

int Data::compara(Data data){

	if ((data.dia == dia) && (data.mes == mes) && (data.ano == ano)){ // Iguais
		return 0; 
	}
	else if (data.ano < ano){ // Corrente maior que a do parâmetro
		return 1;
	}
	else if (data.ano == ano){
        if (data.mes > mes){ // Parâmetro maior que a corrente
        	return -1;
        }
        else if (data.mes < mes){ // Corrente maior que a do parâmetro
        	return 1;
        }
        else if(data.mes == mes){
            if(data.dia > dia){ // Parâmetro maior que a corrente
                return -1; 
            }
            else{
                return 1; // Corrente maior que a do parâmetro
            }
        }
    }
}

string Data::getMesExtenso(){

	switch(mes){

		case 1:
			return "Janeiro";
			break;
	
		case 2:
			return "Fevereiro";
			break;

		case 3:
			return "Marco";
			break;

		case 4:
			return "Abril";
			break;
		
		case 5:
			return "Maio";
			break;

		case 6:
			return "Junho";
			break;

		case 7:
			return "Julho";
			break;

		case 8:
			return "Agosto";
			break;

		case 9:
			return "Setembro";
			break;

		case 10:
			return "Outubro";
			break;

		case 11:
			return "Novembro";
			break;

		case 12:
			return "Dezembro";
			break;
	}
}

bool Data::isBissexto(){

	if (ano % 4 == 0){
		if (ano % 100 != 0){
			return true;
		}
	}

	else if (ano % 4 != 0){
		if (ano % 400 != 0){
			return false;
		}
		else{
			return true;
		} 	
	}
}

/*bool Data::isBissexto(){
    if(ano % 100 == 0){
        if(ano % 400 == 0){
            return true;
        }
    }else if(ano % 4 == 0 ){
        return true;
    }else{
        return false;
    }
}
*/

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