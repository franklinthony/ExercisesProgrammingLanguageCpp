#ifndef PESSOA_H
#define PESSOA_H

#include <string>
#include "Endereco.h"

class Pessoa{

	private:
		std::string nome;
		std::string telefone;
		Endereco endereco;

	public:
		Pessoa(std::string nome);
		Pessoa(std::string nome, Endereco endereco, std::string telefone);
		std::string getNome();
		std::string getTelefone();
		Endereco getEndereco();
		void setNome(std::string nome);
		void setTelefone(std::string telefone);
		void setEndereco(Endereco endereco);
};

#endif