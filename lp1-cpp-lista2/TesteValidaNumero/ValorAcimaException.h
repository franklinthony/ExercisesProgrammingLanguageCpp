#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include <iostream>
#include <exception>

using namespace std;

class ValorAcimaException : public exception{
	
	protected:
		string erro = "Valor acima do permitido";
	
	public:
		ValorAcimaException();
		virtual string what();
};

#endif
