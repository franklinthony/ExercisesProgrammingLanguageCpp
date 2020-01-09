#ifndef DATA_H
#define DATA_H
#include <string>

using namespace std;

class Data{

private:
	int dia;
	int mes;		
	int ano;

public:
	Data();
	Data(int dia, int mes, int ano);
	int compara(Data data);
	string getMesExtenso();
	bool isBissexto();
	int getDia();
	int getMes();
	int getAno();
	void setDia(int dia);
	void setMes(int mes);
	void setAno(int ano);
};

#endif