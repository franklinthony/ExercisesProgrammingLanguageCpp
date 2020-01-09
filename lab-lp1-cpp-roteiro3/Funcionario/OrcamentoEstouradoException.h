#ifndef ORCAMENTOESTOURADOEXCEPTION_H
#define ORCAMENTOESTOURADOEXCEPTION_H

#include <string>
#include <exception>

class OrcamentoEstouradoException : public std::exception{
    
    private:
        std::string erro = "Orcamento estourado";
    
    public:
        OrcamentoEstouradoException();
        virtual std::string what();
};

#endif