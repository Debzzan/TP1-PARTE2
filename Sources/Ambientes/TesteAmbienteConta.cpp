#include <iostream>

#include "AmbienteConta.cpp"

using namespace std;

int main() {
    AmbienteConta ambiente;
    Conta contaUsuario;

    // Testando a criação da conta
    ambiente.CriarConta(contaUsuario);

    // Exibindo os resultados para verificação
    cout << "Verificação dos dados da conta criada:" << endl;
    cout << "Código: " << contaUsuario.getCode().getValor() << endl;
    cout << "Senha: " << contaUsuario.getPass().getValor() << endl;

    return 0;
}
