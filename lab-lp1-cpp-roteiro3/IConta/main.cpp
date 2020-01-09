#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

	Conta c1 = Conta("Franklin Anthony", 1500, "41162-0", 2750);
	ContaEspecial ce1 = ContaEspecial("Anthony Ramos", 2000, "1619-5", 4537);

	c1.definirLimite();
	ce1.definirLimite();

	c1.sacar(2750);
	ce1.sacar(4537);

	c1.depositar(150);
	ce1.depositar(726);
	
	c1.print();
	ce1.print();

	return 0;
}