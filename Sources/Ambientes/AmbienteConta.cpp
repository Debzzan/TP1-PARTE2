#include <iostream>
#include "../../Includes/Ambientes/AmbienteConta.hpp"
#include "../Dominios/codigo.cpp"
#include "../Dominios/senha.cpp"


using namespace std;

void AmbienteConta::CriarConta(Conta &contaUsuario)
{
    Codigo code;
    Senha pass;
    std::string codigo;
    std::string senha;

    cout << "Digite o nome do usuário: ";
    cin >> codigo;
    cout << "Digite a senha: ";
    cin >> senha;

    code.setValor(codigo);
    pass.setValor(senha);
    contaUsuario.setCode(code);
    contaUsuario.setPass(pass);

    cout << "Conta criada com sucesso!" << endl;
}