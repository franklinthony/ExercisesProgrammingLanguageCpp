#ifndef RESTAURANTECASEIRO_H
#define RESTAURANTECASEIRO_H

#include <string>
#include "MesaDeRestaurante.h"

class RestauranteCaseiro{

private:
	MesaDeRestaurante mesas[20];

public:
	RestauranteCaseiro();
	void adicionaAoPedido(int indMesa, Pedido p);
	double calculaTotalRestaurante();
	void print();
};

#endif