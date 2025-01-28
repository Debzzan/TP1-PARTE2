#include <iostream>

#include "../TP1-PARTE2/Includes/Entidades/conta.hpp"
#include "../TP1-PARTE2/Includes/Dominios/codigo.hpp"
#include "../TP1-PARTE2/Includes/Dominios/senha.hpp"
#include "../TP1-PARTE2/Sources/Dominios/codigo.cpp"
#include "../TP1-PARTE2/Sources/Dominios/senha.cpp"

using namespace std;

int main()
{

while(true){
int opcao;
cout << "SISTEMA CENTRAL DE AUTENTICACAO" << endl;
cout << endl;
cout << "1 - CADASTRAR USUARIO" << endl;
cout << "2 - AUTENTICAR USUARIO" << endl;
cout << "3 - SAIR" << endl;
cin >> opcao;

if(opcao == 1){
    string codigo;
    string senha;
    cout << "Digite o codigo do usuario: ";
    cin >> codigo;
    cout << "Digite a senha do usuario: ";
    cin >> senha;
    Usuario usuario;
    usuario.setCodigo(codigo);
    usuario.setSenha(senha);
    cout << "Usuario cadastrado com sucesso!" << endl;
    cout << endl;
}
else if(opcao == 2){
    string codigo;
    string senha;
    cout << "Digite o codigo do usuario: ";
    cin >> codigo;
    cout << "Digite a senha do usuario: ";
    cin >> senha;
    Usuario usuario;
    Codigo codigoObj;
    codigoObj.setValor(codigo);
    usuario.conta.setCode(codigoObj);
    usuario.setSenha(senha);
    cout << "Usuario autenticado com sucesso!" << endl;
    cout << endl;
}
else if(opcao == 3){
    cout << "Saindo do sistema..." << endl;
    break;
}
else{
    cout << "Opcao invalida!" << endl;
    cout << endl;
}

}
}