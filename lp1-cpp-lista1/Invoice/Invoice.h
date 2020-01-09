#ifndef INVOICE_H
#define INVOICE_H
#include <string>

using namespace std;

class Invoice{

private:
	int qItem;
	int numero;
	double precoItem;
	string descricao;

public:
	Invoice(int numero, string descricao, int qItem, double precoItem);
	static int ultNum;
	double getInvoiceAmount();
	int getNumero();
	string getDescricao();
	int getQItem();
	double getPrecoItem();
	void setNumero(int numero);
	void setDescricao(std::string descricao);
	void setQItem(int qItem);
	void setPrecoItem(double precoItem);
	void print();
};

#endif