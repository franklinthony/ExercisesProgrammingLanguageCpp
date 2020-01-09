#include <string>
#include "OrcamentoEstouradoException.h"

using namespace std;

OrcamentoEstouradoException::OrcamentoEstouradoException(){
}

string OrcamentoEstouradoException::what(){

    return erro;
}