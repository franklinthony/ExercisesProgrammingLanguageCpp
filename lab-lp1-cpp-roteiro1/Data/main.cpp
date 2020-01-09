#include <iostream>
#include "Data.h"

using namespace std;

int main(){

Data *d2 = new Data(23, 11, 2019);

for (int i = 0; i < 50; i++){
	d2->avancarDia();
	d2->print();
}

delete(d2);

return 0;
}


