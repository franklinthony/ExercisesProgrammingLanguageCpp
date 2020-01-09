#include <iostream>
#include "ValorAbaixoException.h"

using namespace std;

ValorAbaixoException::ValorAbaixoException(){
}

string ValorAbaixoException::what(){

	return erro;
}
