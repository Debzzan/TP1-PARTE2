#include "../../Includes/Dominios/senha.hpp"

/**
 * Classe Senha
 * Esta classe implementa uma senha, verificando:
 * - Se o valor contém pelo menos 5 números.
 * - Se o valor não possui digitos repetidos.
 * - Se o valor não contém os digitos em ordem crescente ex:(12345).
 * - Se o valor não contém os digitos em ordem decrescente ex(54321):
 * 
 * Apenas serão aceitos datas que cumprem os requisitos acima.
 */

/**
 * @brief Método que valida a senha.
 * 
 * Este método verifica se todos os requisitos propostos estão sendo cumpridos.
 * Casa não sejam cumpridos, uma exceção do tipo 'std::invalid_argument' será lançada.
 * 
 * @param val_senha Senha que deve ser validada.
 * @throw std::invalid_argument Se a senha não cumprir os requisistos.
 */

bool Senha::validar(std::string val_senha){
int m = 0;
int n = 0;
// Verifica se a senha possui o temanho esperado e os digitos não estão repetidos.
for (int i = 0; i < val_senha.length(); i++)
    {
    char d = val_senha [i];

for (int j = 0; j < val_senha.length(); j++)
    { 
        char c = val_senha[j];
        
        if (c == d && j != i)
        {
            // Lança exceção.
            throw std::invalid_argument("Senha Incorreta.");
          
        }
        else
        {
            // Caso a senha cumpra os requisitos o método continua a verificação.
            continue;
        }      
    }
    }

// Verifica se a senha possui o temanho esperado e os digitos não estão em ordem crescente nem decrescente.
    int j = 1;
    int p = 1;
    int q = 1;

for (int i = 0; i < val_senha.length(); i++)
{
    char e = val_senha[i];
    char f = val_senha[j];

    if (val_senha[i] + 1 == val_senha[j])
    {
        p++;
    }
    if (val_senha[i] - 1 == val_senha[j]){
        q++;
    }
        j++; 
}

if (p == 5 || q == 5)
{
    // Lança exceção.
    throw std::invalid_argument("Senha Incorreta.");   
}
    // Caso a senha cumpra os requisitos o método retorna 'true'.
    return true;
}

/**
 * @brief Define o valor da senha.
 * 
 * Este método valida os valores fornecido.
 * Se o valor recebido for valido o mesmo é armazenado em 'val_senha', e o metodo retorna 'True'.
 * 
 * @param val_senha senha a ser atribuída.
 * @return 'True' se o valor for válido.
 * @throw invalid_argument Se o valor não válido.
 */

bool Senha::setValor(std::string val_senha){
    validar(val_senha);             //Valida o valor fornecido.
    this->val_senha = val_senha;    //Atribui o valor, se o mesmo for válido.
    return true;                    //Retorna sucesso.
}