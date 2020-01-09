#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H

#include <string>
#include <exception>

class FuncionarioNaoExisteException : public std::exception{
    
    private:
        std::string erro = "Funcionario nao existe";
    
    public:
        FuncionarioNaoExisteException();
        virtual std::string what();
};

#endif