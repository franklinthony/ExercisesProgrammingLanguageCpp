#include <string>
#include "SaldoNaoDisponivelException.h"

using namespace std;

SaldoNaoDisponivelException::SaldoNaoDisponivelException(){
}

string SaldoNaoDisponivelException::what(){

	return erro;
}