#include "Cirurgiao.h"
#include "Oftalmologista.h"

int main(){

	Medico *cir = new Cirurgiao();
	Medico *oft = new Oftalmologista();

	cir->setNome("Carlos Augusto");
	cir->setNomeEspecializacao("Cirurgiao");
	cir->setAltura(1.75);
	cir->setPeso(78);

	oft->setNome("Ana Maria");
	oft->setNomeEspecializacao("Oftalmologista");
	oft->setAltura(1.65);
	oft->setPeso(67);

	cir->print();
	cir->procedimentoEspecifico();

	oft->print();
	oft->procedimentoEspecifico();

	delete cir;
	delete oft;

	return 0;
}
