#include <iostream>
#include "Invoice.h"

using namespace std;

Invoice::Invoice(int numero, string descricao, int qItem, double precoItem){ // Chamada do construtor sem parâmetro 'Invoice()'

	setNumero(numero);
	setDescricao(descricao);
	setQItem(qItem);
	setPrecoItem(precoItem);
}

double Invoice::getInvoiceAmount(){

	return qItem * precoItem;
}

int Invoice::getNumero(){

	return numero;
}

string Invoice::getDescricao(){

	return descricao;
}

int Invoice::getQItem(){

	return qItem;
}

double Invoice::getPrecoItem(){

	return precoItem;
}

void Invoice::setNumero(int numero){

	if (numero < 1){
		this->numero = 1;
	}
	else{
		this->numero = numero;
	}
}

void Invoice::setDescricao(string descricao){

	this->descricao = descricao;
}

void Invoice::setQItem(int qItem){

	if (qItem < 1){
		this->qItem = 0;
	}
	else{
		this->qItem = qItem;
	}
}

void Invoice::setPrecoItem(double precoItem){

	if (precoItem < 0){
		this->precoItem = 0.0;
	}
	else{
		this->precoItem = precoItem;
	}
}

void Invoice::print(){

	cout << "Numero: " << numero << endl<< "Descricao: "
		<< descricao << endl << "Quantidade: " << qItem
		<< endl << "Preco por unidade: R$ " << precoItem
		<< endl << "Total a pagar: R$ " << getInvoiceAmount()
		<< endl << endl;
}



