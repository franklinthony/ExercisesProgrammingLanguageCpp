#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Comissionado.h"
#include "Horista.h"	

using namespace std;

int main(){

    Funcionario *f1 = new Assalariado("Franklin", 24, 1200);
    Funcionario *f2 = new Comissionado("Anthony", 69, 710, 189, 20);
    Funcionario *f3 = new Horista("Ramos", 15, 12, 45);

    f1->calcularSalario();
    f2->calcularSalario();
    f3->calcularSalario();

    SistemaGerenciaFolha folha = SistemaGerenciaFolha();

    folha.setFuncionarios(f1);
    folha.setFuncionarios(f2);
    folha.setFuncionarios(f3);

    f1->print();
    f2->print();
    f3->print();

    cout << "\nValor total da folha: R$ " << folha.calculaValorTotalFolha() << endl;

    double b;

    try{
        b = folha.consultaSalarioFuncionario("Ana");
    }
    catch(FuncionarioNaoExisteException func){

        cerr << func.what() << endl;
    }

    return 0;
}