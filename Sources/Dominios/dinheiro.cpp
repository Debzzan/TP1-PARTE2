#include "dinheiro.hpp"
#include <stdexcept>

/**
 * Classe Dinheiro
 * Esta classe verifica se o valor armazenado em dinheiro está dentro do intervalo 0,00-200.000,00:
 * 
 * Apenas serão aceitos valores que cumpram o requisito acima.
 */

/**
 * @brief Método que valida dinheiro.
 * 
 * Este método verifica se o requisito proposto está sendo cumprido.
 * Casa não seja cumprido, uma exceção do tipo 'std::invalid_argument' será lançada.
 * 
 * @param valor quantia a ser validada.
 * @throw std::invalid_argument Se o valor não estiver dentro do intervalo.
 */

bool Dinheiro::validar(float valor){
    // Verifica se o valor está dentro do intervalo de 00-200000.
    if(valor >= 0 && valor <= 200000){
        // Caso o valor esteja dentro do intevalo o método retorna 'true'.
        return true;
    } else {
        // Lança exceção.
        throw std::invalid_argument("Dinheiro Errado");
    }
}

/**
 * @brief Define o valor.
 * 
 * Este método valida o valor fornecido.
 * Se o valor recebido for valido o mesmo é armazenado em 'valor', e o metodo retorna 'True'.
 * 
 * @param valor quantia a ser atribuída.
 * @return 'True' se o valor for válido.
 * @throw invalid_argument Se o valor não válido.
 */
bool Dinheiro::setValor(float valor){
    validar(valor);         //Valida o valor fornecido. 
    this->valor = valor;    //Atribui o valor, se o mesmo for válido.   
    return true;            //Retorna sucesso.
}


