#include <iostream>
#include "RestauranteCaseiro.h"

using namespace std;

int main(){

	RestauranteCaseiro rest = RestauranteCaseiro();

	Pedido p1; 
	// Pedido vai pra mesa 1, mas é printado "Mesa #2" por causa do incremento do índice
	p1 = Pedido(123, "Calabresa", 1, 15);
	rest.adicionaAoPedido(1, p1);
	p1 = Pedido(123, "Guarana", 2, 7);
	rest.adicionaAoPedido(1, p1);
	p1 = Pedido(123, "Arroz", 1, 3.50);
	rest.adicionaAoPedido(1, p1);

	rest.print();

	cout << "Total do restauranta: R$ " << rest.calculaTotalRestaurante() << endl;
	
	return 0;
}