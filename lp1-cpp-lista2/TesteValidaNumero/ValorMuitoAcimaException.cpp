#include <iostream>
#include "ValorMuitoAcimaException.h"

using namespace std;

ValorMuitoAcimaException::ValorMuitoAcimaException(){
}

string ValorMuitoAcimaException::what() {
	
	return erro;
}