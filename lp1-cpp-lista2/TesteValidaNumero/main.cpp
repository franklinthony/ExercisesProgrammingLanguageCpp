#include <string>
#include "TesteValidaNumero.h"

using namespace std;

int main(){
	
	TesteValidaNumero teste = TesteValidaNumero();

	 for (int i = -400; i <= 1100; i+=500){
        
        try{
            cout << "Numero " << i << ": ";
            teste.validaNumero(i);
		}
		catch(ValorAbaixoException e){
        
            cerr << e.what() << endl;
        }
        catch(ValorAcimaException e){
        
            cerr << e.what() << endl;
        }
        catch(ValorMuitoAcimaException e){
        
            cerr << e.what() << endl;
        }
    }

	return 0;
}