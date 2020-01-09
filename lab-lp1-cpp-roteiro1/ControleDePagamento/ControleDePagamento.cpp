#include "ControleDePagamento.h"
#include "Pagamento.h"

ControleDePagamento::ControleDePagamento(){

    for (int i = 0; i < MAX_PAGAMENTOS; i++){
        pag[i].setValorPagamento(0);
        pag[i].setNomeFuncionario(" ");
    }
}

void ControleDePagamento::setPagamentos(std::string nomeFuncionario, double valorPagamento){
    
    int aux = VerificaIndiceDisponivel();

    pag[aux].setNomeFuncionario(nomeFuncionario);
    pag[aux].setValorPagamento(valorPagamento);
}

double ControleDePagamento::calculaTotalDePagamentos(){
    
    double soma = 0;

    for (int i = 0; i < MAX_PAGAMENTOS; i++){
        soma += pag[i].getValorPagamento();
    }
    return soma;
}

bool ControleDePagamento::existePagamentoParaFuncionario(std::string nomeFuncionario){
   
    for (int i = 0; i < MAX_PAGAMENTOS; i++){
        if (pag[i].getNomeFuncionario() == nomeFuncionario)
            return true;
    }
    return false;
}

int ControleDePagamento::VerificaIndiceDisponivel(){
    
    for (int i = 0; i < MAX_PAGAMENTOS; i++){
        if (pag[i].getValorPagamento() == 0)
            return i;
    }
    return 0;
}
