#include <iostream>
#include "Horario.h"

using namespace std;

int main(){

	Horario h1 = Horario(23, 0, 20);
	Horario *h2 = new Horario();
	Horario h3 = Horario();

	h2->setHora(23);
	h2->setMinuto(59);
	h2->setSegundo(10);

	h3.setHorario(13, 45, 23);

	h1.print();
	h3.print();

	for (int i = 0; i < 60; i++){

		h2->avancarHorario();
		h2->print();
	}
	
	delete(h2);
	
	return 0;
}