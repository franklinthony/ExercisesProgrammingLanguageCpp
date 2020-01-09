#include <iostream>
#include "ValorAcimaException.h"

using namespace std;

ValorAcimaException::ValorAcimaException(){
}

string ValorAcimaException::what() {
	
	return erro;
}