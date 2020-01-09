#include <string>
#include <iostream>
#include "MesaDeRestaurante.h"

using namespace std;

MesaDeRestaurante::MesaDeRestaurante(){

	indice = 0;
}

void MesaDeRestaurante::adicionaAoPedido(Pedido d){

	for (int i = 0; i < 10; i++){ // Se o pedido existir
		if(pedidos[i].getDescricao() == d.getDescricao()){
			pedidos[i].setQuantidade(pedidos[i].getQuantidade() + d.getQuantidade());
			return;
		}
	}
	pedidos[indice] = d; // Se o pedido não existir
	indice++;
}

void MesaDeRestaurante::zeraPedidos(){

	for (int i = 0; i < 10; i++){
		pedidos[i].setQuantidade(0);
	}
}

double MesaDeRestaurante::calculaTotal(){

	double valor = 0.0;

	for (int i = 0; i < 10; i++){
		valor += pedidos[i].getPreco() * pedidos[i].getQuantidade();
	}
	return valor;
}

void MesaDeRestaurante::print(){

	for (int i = 0; i < 10; i++){
		if (pedidos[i].getQuantidade() > 0){
			pedidos[i].print();
		}
	}
}