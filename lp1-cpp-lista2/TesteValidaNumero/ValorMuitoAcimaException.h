#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include <iostream>
#include <exception>

using namespace std;

class ValorMuitoAcimaException : public exception{

	protected:
		string erro = "Valor muito acima do permitido";
	
	public:
		ValorMuitoAcimaException();
		virtual string what();
};

#endif
