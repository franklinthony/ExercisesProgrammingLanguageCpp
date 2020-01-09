#include <iostream>
#include "Data.h"

using namespace std;

int main(){

int flag1, flag2;

Data d1 = Data();
Data *d2 = new Data(16, 7, 2018);

d1.setDia(16); // Data corrente
d1.setMes(7);
d1.setAno(2019);

cout << "Data: " << d2->getDia() << "/" << d2->getMes() << "/" << d2->getAno()
	<< endl << "Mes por extenso: " << d2->getMesExtenso() << endl;

flag1 = d2->isBissexto();

if (flag1 == 0){
	cout << "Eh bissexto: Não" << endl;
}
else{
	cout << "Eh bissexto: Sim" << endl;
}

flag2 = d1.compara(*d2);

if (flag2 == 0){
	cout << "Comparando as datas: Datas iguais" << endl;
}
else if (flag2 == 1){
	cout << "Comparando as datas: Data corrente maior que a do parametro" << endl;
}
else{
	cout << "Comparando as datas: Data do parametro maior que a corrente" << endl;
}

delete(d2);

return 0;
}


