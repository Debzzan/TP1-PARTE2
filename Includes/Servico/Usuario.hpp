#ifndef USUARIO_HPP_INCLUDED
#define USUARIO_HPP_INCLUDED
#include "../Entidades/conta.hpp"



class Usuario
{
private:


public:
    Usuario();
    virtual ~Usuario() = 0;
    Conta conta;
    



};

Usuario::Usuario()
{

}

Usuario::~Usuario()
{
    
}

#endif