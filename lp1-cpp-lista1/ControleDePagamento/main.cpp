#include <iostream>
#include "ControleDePagamento.h"

using namespace std;

int main(){

    ControleDePagamento *controlPag = new ControleDePagamento();
    controlPag->setPagamentos("Franklin Anthony", 910);
    controlPag->setPagamentos("João Lucas", 1000);
    controlPag->setPagamentos("Pedro Carlos", 1500);
    
    cout << "Total pago: " << controlPag->calculaTotalDePagamentos() << endl;
    
    if(controlPag->existePagamentoParaFuncionario("Franklin Anthony"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;
    if(controlPag->existePagamentoParaFuncionario("Carlos Gabriel"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;

    delete(controlPag);

    return 0;
}