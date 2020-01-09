#include <iostream>
#include "Voo.h"

using namespace std;

int main(){

    Voo *v1 = new Voo(); // Construtor padrão

    cout << "Numero do voo: " << v1->getNumVoo() << "\nData: " << v1->getData().getDia() 
    	<< "/" << v1->getData().getMes() << "/" << v1->getData().getAno()
        << "\nHoras: " << v1->getHorario().getHora() << ":" << v1->getHorario().getMinuto() 
        << ":" << v1->getHorario().getSegundo() << endl;
    cout << "A proxima cadeira livre eh: " << v1->proximoLivre() + 1 << endl;
    cout << "A cadeira 9 esta ";

    if(v1->verifica(9))
        cout << "disponivel." << endl;
    else
        cout << "ocupada." << endl;

    if(v1->ocupa(7))
        cout << "Cadeira ocupada com sucesso!" << endl;
    else
        cout << "Cadeira indisponivel." << endl;

    cout << v1->vagas() << " vagas disponiveis." << endl;
    cout << "Numero do voo: " << v1->getNumVoo() << endl;
    cout << "Data: " << v1->getData().getDia() << "/" << v1->getData().getMes() << "/"
    	<< v1->getData().getAno() << endl;
    cout << "Horas: " << v1->getHorario().getHora() << ":" << v1->getHorario().getMinuto()
    	<< ":" << v1->getHorario().getSegundo() << endl;
    
    delete(v1);

    return 0;
}