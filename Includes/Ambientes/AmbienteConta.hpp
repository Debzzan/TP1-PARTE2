#include <iostream>
#include "../Entidades/conta.hpp"
#include "../Dominios/codigo.hpp"
#include "../Dominios/senha.hpp"


using namespace std;

class AmbienteConta
{
private:
    Conta conta;
public:
    void CriarConta(Conta &contaUsuario);
    void AutenticarConta();
    void TrocarSenha();
    void ExcluirConta();
};