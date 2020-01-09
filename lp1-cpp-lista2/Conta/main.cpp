#include <iostream>
#include "Conta.h"
#include "ContaEspecial.h"

using namespace std;

int main(){

	Conta c1 = Conta("Franklin Anthony", 1500, "41162-0", 2750);
	ContaEspecial ce1 = ContaEspecial("Anthony Ramos", 2000, "1619-5", 4537);

	c1.definirLimite();
	ce1.definirLimite();
	
	try{
		c1.sacar(1500);
		ce1.sacar(750);
	}
	catch(SaldoNaoDisponivelException s){

		cerr << s.what() << endl;
	}
	
	c1.print();
	ce1.print();

	try{
		c1.sacar(1300);
	}
	catch(SaldoNaoDisponivelException s){

		cerr << s.what() << endl;
	}

	return 0;
}