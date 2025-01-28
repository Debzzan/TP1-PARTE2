#ifndef USUARIO_HPP_INCLUDED
#define USUARIO_HPP_INCLUDED
<<<<<<< HEAD
#include "../Entidades/conta.hpp"



class Usuario
{
private:


public:
    Usuario();
    virtual ~Usuario() = 0;
    Conta conta;
    
=======
#include "../TP1-PARTE2/Includes/Entidades/conta.hpp"


class Usuario : public Conta
{
private:
 void CriarConta();
 void ExcluirConta();
 void Login();


public:
 
 
>>>>>>> refs/remotes/origin/main



};

<<<<<<< HEAD
Usuario::Usuario()
{

}

Usuario::~Usuario()
{
    
}
=======
>>>>>>> refs/remotes/origin/main

#endif