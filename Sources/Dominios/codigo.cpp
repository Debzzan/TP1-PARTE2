#include "codigo.hpp"
#include <ctype.h>

/**
 * Classe Código
 * Esta classe implementa um cógido que deve seguir os seguintes requisitos:
 * - O código deve conter 6 caracteres.
 * - Cada caracter pode ser uma letra, não importando se é maiuscula ou minuscula.
 * - Cada caracter pode ser um número.
 * 
 * Apenas serão aceitos códigos que cumprem os requisitos acima.
 */

/**
 * @brief Método que valida um código.
 * 
 * Este método verifica se todos os requisitos propostos estão sendo cumpridos.
 * Casa não sejam cumpridos, uma exceção do tipo 'std::invalid_argument' será lançada.
 * 
 * @param codigo Codigo que deve ser validado.
 * @throw std::invalid_argument Se o codigo não cumprir os requisistos.
 */
void Codigo::validar(std::string str){
    int len = str.length();
    // Verifica se o código possui 6 caracteres.
    if (len != 6){
        throw std::invalid_argument("Argumento Invalido");
        // Lança exceção
    }
    else
    // Passa para outra etapa de verificação
    {
    for (char c : str) {          
        if (!isalnum(c)) {  
            // Se algum caracter não for numero nem letra é lançado outra execação       
            throw std::invalid_argument("Argumento Invalido");        
        }
    }   
    }
}

/**
 * @brief Define o valor do código.
 * 
 * Este método valida o valor fornecido.
 * Se o mesmo for valido o valor 'codigo' é armazenado, e o metodo retorna 'True'.
 * 
 * @param codigo codigo a ser atribuído.
 * @return 'True' se o valor for válido.
 * @throw invalid_argument Se o valor não válido.
 */
bool Codigo::setValor(std::string str){
    validar(str);       //Valida o valor fornecido.
    this->str = str;    //Atribui o valor, se o mesmo for válido.
    return true;        //Retorna sucesso.


}