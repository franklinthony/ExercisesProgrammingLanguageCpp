#include <string>
#include <iostream>
#include "Pedido.h"

using namespace std;

Pedido::Pedido(){

	numero = 0;
	descricao = " ";
	quantidade = 0;
	preco = 0.0;
}

Pedido::Pedido(int numero, std::string descricao, int quantidade, double preco){

	this->numero = numero;
	this->descricao = descricao;
	this->quantidade = quantidade;
	this->preco = preco;
}

int Pedido::getNumero(){

	return numero;
}

string Pedido::getDescricao(){

	return descricao;
}

int Pedido::getQuantidade(){

	return quantidade;
}

double Pedido::getPreco(){

	return preco;
}

void Pedido::setQuantidade(int quantidade){

	this->quantidade = quantidade;
}

void Pedido::print(){

	cout << "Descricao: " << descricao << endl << "Quantidade: "
		<< quantidade << endl << "Preco: R$ " << preco
		<< endl << "Total: R$ " << preco * quantidade << endl << endl;
}