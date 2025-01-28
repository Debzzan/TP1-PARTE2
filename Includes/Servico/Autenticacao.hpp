#ifndef AUTENTICACAO_HPP_INCLUDED
#define AUTENTICACAO_HPP_INCLUDED
#include "../TP1-PARTE2/Includes/Entidades/conta.hpp"

class Autenticacao
{
public:
    Autenticacao(); // Constructor declaration
    bool autenticar(const std::string& usuario, const std::string& senha); // Method declaration
private:
    std::string usuario;
    std::string senha;
};

#endif