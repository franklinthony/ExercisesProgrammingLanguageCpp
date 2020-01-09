#include <string>
#include <iostream>
#include "RestauranteCaseiro.h"
#include "MesaDeRestaurante.h"

using namespace std;

RestauranteCaseiro::RestauranteCaseiro(){
}

void RestauranteCaseiro::adicionaAoPedido(int indMesa, Pedido p){

	mesas[indMesa].adicionaAoPedido(p);
}

double RestauranteCaseiro::calculaTotalRestaurante(){

	double valor = 0.0;

	for (int i = 0; i < 20; i++){
		valor += mesas[i].calculaTotal();
	}
	return valor;
}

void RestauranteCaseiro::print(){

	for (int i = 0; i < 20; i++){
		if (mesas[i].calculaTotal() > 0){
			cout << "Mesa #" << i + 1 << endl << endl; 
			mesas[i].print();
			cout << endl;
		}
	}
}