#include <iostream>
#include "Pessoa.h"

using namespace std;

int main(){

	Endereco end1 = Endereco("José Lins do Rego", 152, "Centro", "Pilar", "Paraiba", "58338-000");
	Endereco end2 = Endereco("Anisio Pereira Borges", 70, "Centro", "Pilar", "Paraiba", "58338-000");

	Pessoa p1 = Pessoa("Franklin Anthony", end1, "(83) 98807-2528");
	Pessoa *p2 = new Pessoa("Anthony Ramos");

	p2->setEndereco(end2);
	p2->setTelefone("(83) 98888-7777");

	cout << "Nome: " << p1.getNome() << endl << "Endereco: "
		<< end1.toString() << endl << "Telefone: " << p1.getTelefone() << endl << endl;

	cout << "Nome: " << p2->getNome() << endl << "Endereco: "
		<< end2.toString() << endl << "Telefone: " << p2->getTelefone() << endl;
	

	delete p2;

	return 0;
}