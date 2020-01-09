#include "TesteValidaNumero.h"

using namespace std;

TesteValidaNumero::TesteValidaNumero(){
}

void TesteValidaNumero::validaNumero(int num){
	
	if (num <= 0){

		throw ValorAbaixoException();
	}
	else if (num > 100 && num < 1000){

		throw ValorAcimaException();
	}
	else if (num >= 1000){

		throw ValorMuitoAcimaException();
	}
	else
		cout << "Valor valido" << endl;
}