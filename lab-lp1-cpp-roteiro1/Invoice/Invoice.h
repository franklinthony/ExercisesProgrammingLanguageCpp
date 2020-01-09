#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice{

private:
	int qItem;
	int numero;
	double precoItem;
	std::string descricao;

public:
	Invoice(int numero, std::string descricao, int qItem, double precoItem);
	double getInvoiceAmount();
	int getNumero();
	std::string getDescricao();
	int getQItem();
	double getPrecoItem();
	void setNumero(int numero);
	void setDescricao(std::string descricao);
	void setQItem(int qItem);
	void setPrecoItem(double precoItem);
	void print();
};

#endif