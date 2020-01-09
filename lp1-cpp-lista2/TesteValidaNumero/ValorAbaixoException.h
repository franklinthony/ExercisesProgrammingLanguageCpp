#ifndef VALORABAIXOEXCEPTION_H
#define VALORABAIXOEXCEPTION_H

#include <iostream>
#include <exception>

using namespace std;

class ValorAbaixoException : public exception{

	protected:
		string erro = "Valor muito baixo"; // Texto que vai ser lançado

	public:
		ValorAbaixoException();
		virtual string what(); // O método que lança - "getErro()"
};

#endif
