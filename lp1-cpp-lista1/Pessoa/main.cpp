#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){

	Pessoa p1 = Pessoa("Franklin Anthony");
	Pessoa *p2 = new Pessoa("Franklin Anthony", 20, "(83) 98807-2528");

	p1.setIdade(25);
	p1.setTelefone("(83) 98730-4934");
	
	p1.print();
	p2->print();

	delete(p2);

	return 0;
}