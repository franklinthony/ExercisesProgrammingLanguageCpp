#include <iostream>
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"

using namespace std;

int main(){

	Trabalhador *tph1 = new TrabalhadorPorHora("Franklin Anthony", 40);
	Trabalhador *ta1 = new TrabalhadorAssalariado("Anthony Ramos", 1500);

	cout << "Nome do trabalhador por hora: " << tph1->getNome()
		<< endl << "Valor da hora: R$ " << tph1->getValorDaHora()
		<< endl << "Quantidade de horas extras: " << tph1->getHoraExtra()
		<< endl << "Pagamento semanal: R$ " << tph1->calcularPagamentoSemanal(45)
		<< endl << "Pagamento mensal: R$ " << tph1->getSalario() << endl << endl;

	cout << "Nome do trabalhador assalariado: " << ta1->getNome() << endl
		<< "Pagamento semanal: R$ " << ta1->calcularPagamentoSemanal(2) << endl
		<< "Pagamento mensal: R$ " << ta1->getSalario() << endl;

	delete tph1;
	delete ta1;

	return 0;
}