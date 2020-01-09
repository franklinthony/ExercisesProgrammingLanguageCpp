#ifndef MESADERESTAURANTE_H
#define MESADERESTAURANTE_H

#include <string>
#include "Pedido.h"

class MesaDeRestaurante{

	private:
		int indice;
		Pedido pedidos[10];

	public:
		MesaDeRestaurante();
		void adicionaAoPedido(Pedido d);
		void zeraPedidos();
		double calculaTotal();
		void print();
};

#endif