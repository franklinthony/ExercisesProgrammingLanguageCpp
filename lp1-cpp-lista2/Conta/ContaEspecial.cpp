#include <string>
#include "ContaEspecial.h"

using namespace std;

ContaEspecial::ContaEspecial(string nomeCliente, double salarioMensal, string numeroConta, double saldo) 
: Conta(nomeCliente, salarioMensal, numeroConta, saldo){
}

void ContaEspecial::definirLimite(){

	limite = 3 * salarioMensal;
}