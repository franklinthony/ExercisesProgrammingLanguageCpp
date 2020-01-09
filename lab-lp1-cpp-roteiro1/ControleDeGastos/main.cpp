#include <iostream>
#include "Despesa.h"
#include "ControleDeGastos.h"

using namespace std;

int main(){
	
	ControleDeGastos cg = ControleDeGastos();

	Despesa d1 = Despesa(20, "cinema");
	cg.setDespesa(d1, 0);
	d1 = Despesa(10, "almoco");
	cg.setDespesa(d1, 1);
	d1 = Despesa(55, "boliche");
	cg.setDespesa(d1, 2);
	d1 = Despesa(27, "bebidas");
	cg.setDespesa(d1, 3);
	d1 = Despesa(20, "cinema");
	cg.setDespesa(d1, 4);
	d1 = Despesa(32, "viagem");
	cg.setDespesa(d1, 5);

	cg.print();

	cout << "Total de despesas: R$ " << cg.calculaTotalDeDespesas() << endl;

	cout << "Existe despesa do tipo? " << cg.existeDespesaDoTipo("cinema")
		<< endl;

	return 0;
}