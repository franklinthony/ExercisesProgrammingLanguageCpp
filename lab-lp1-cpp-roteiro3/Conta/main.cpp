#include "ContaCorrente.h"
#include "Poupanca.h"
#include "ContaEspecial.h"

int main(){

	ContaCorrente cc = ContaCorrente("Franklin Anthony", 1234, 1250, 1500);
	Poupanca pp = Poupanca("Anthony Ramos", 4321, 1752, 1, 3);
	ContaEspecial ce = ContaEspecial("Jose Maria", 4567, 3250, 4000);

	cc.definirLimite();
	ce.definirLimite();

	cc.sacar(250);
	ce.sacar(250);

	pp.render();

	cc.depositar(1250);
	ce.depositar(729);

	cc.print();
	pp.print();
	ce.print();

	return 0;
}