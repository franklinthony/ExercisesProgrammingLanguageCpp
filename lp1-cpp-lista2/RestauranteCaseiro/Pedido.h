#ifndef PEDIDO_H
#define PEDIDO_H

#include <string>

class Pedido{

	private:
		int numero;
		std::string descricao;
		int quantidade;
		double preco;

	public:
		Pedido();
		Pedido(int numero, std::string descricao, int quantidade, double preco);
		int getNumero();
		std::string getDescricao();
		int getQuantidade();
		double getPreco();
		void setQuantidade(int quantidade);
		void print();
};

#endif