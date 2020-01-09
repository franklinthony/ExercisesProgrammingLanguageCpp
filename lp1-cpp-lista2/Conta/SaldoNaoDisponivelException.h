#ifndef SALDONAODISPONIVELEXCEPTION_H
#define SALDONAODISPONIVELEXCEPTION_H

#include <string>
#include <exception>

class SaldoNaoDisponivelException : public std::exception{

	protected:
		std::string erro = "Valor do saque maior do que o saldo";

	public:
		SaldoNaoDisponivelException();
		virtual std::string what();
};

#endif