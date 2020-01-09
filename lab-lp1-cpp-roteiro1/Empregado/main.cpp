#include <iostream>
#include "Empregado.h"

using namespace std;

int main(){

	Empregado emp1 = Empregado("Jose", "Maria", 1500);
	Empregado *emp2 = new Empregado("Antonio", "Carlos", 2000);

	emp1.print();
	emp2->print();

	delete(emp2);

	return 0;
}