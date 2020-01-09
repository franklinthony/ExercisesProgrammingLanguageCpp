#include "Consultor.h"

int main(){

	Funcionario c1 = Consultor();
	Funcionario *c2 = new Consultor();
	Funcionario *f1 = new Funcionario();

	c1.setNome("Franklin Anthony");
	c1.setMatricula(201901);
	c1.setSalario(1000);
	c1.getSalario(); // Aumento de 10%
	c1.print();

	c2->setNome("Jorge Lucas");
	c2->setMatricula(2019011);
	c2->setSalario(1750);
	c2->getSalario(0.2); // Aumento de 20%
	c2->print();

	f1->setNome("José Maria");
	f1->setMatricula(202009);
	f1->setSalario(2500);
	f1->getSalario(); // Método 'getSalario()' da classe pai
	f1->print();

	delete c2;
	delete f1;

	return 0;
}