#ifndef TESTEVALIDANUMERO_H
#define TESTEVALIDANUMERO_H

#include <exception>
#include <iostream>
#include "ValorAbaixoException.h"
#include "ValorAcimaException.h"
#include "ValorMuitoAcimaException.h"

class TesteValidaNumero{

	public:
		TesteValidaNumero();
		void validaNumero(int num);
};

#endif