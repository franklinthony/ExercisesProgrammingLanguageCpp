#include <string>
#include "FuncionarioNaoExisteException.h"

using namespace std;

FuncionarioNaoExisteException::FuncionarioNaoExisteException(){
}

string FuncionarioNaoExisteException::what(){

    return erro;
}