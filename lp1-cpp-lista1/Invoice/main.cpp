#include <iostream>
#include "Invoice.h"

using namespace std;

int main(){

	Invoice in1 = Invoice(51, "Biscoito Treloso", 5, 1.50);
	Invoice *in2 = new Invoice(20, "Pão Integral", 4, 2.25);

	in1.print();
	in2->print();

	delete(in2);

	return 0;
}