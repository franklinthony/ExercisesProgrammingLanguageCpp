#ifndef ENDERECO_H
#define ENDERECO_H

#include <string>

class Endereco{

	private:
		int numero;
		std::string rua;
		std::string bairro;
		std::string cidade;
		std::string estado;
		std::string cep;

	public:
		Endereco();
		Endereco(std::string rua, int numero, std::string bairro, std::string cidade, std::string estado, std::string cep);
		std::string toString();
};

#endif