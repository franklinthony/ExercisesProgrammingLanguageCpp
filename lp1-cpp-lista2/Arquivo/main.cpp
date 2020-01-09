#include <iostream>
#include <fstream>

using namespace std;

int main(){

    ifstream entrada("teste.txt", ios::in);
    ofstream saida("teste_bkp.txt", ios::out);

    string nome;
    int idade, anoNascimento;

    if(!entrada.is_open()){
        cout << "Houve falha na entrada" << endl;
        return -1;
    }
    if(!saida.is_open()){
        cout << "Houve falha na saida" << endl;
        return -2;
    }

    while(!entrada.eof()){

        entrada >> nome;
        cout << nome << endl;

        entrada >> idade;
        cout << idade << endl;

        entrada >> anoNascimento;
        cout << anoNascimento << endl;
    }

    saida << nome << endl;
    saida << idade << endl;
    saida << anoNascimento;

    entrada.close();
    saida.close();
    
    return 0;
}