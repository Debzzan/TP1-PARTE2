#include "duracao.hpp"
#include <stdexcept>

/**
 * Classe Duração.
 * Esta classe verifica se a duração está dentro do intervalo 0-360 em dias, ou seja de 1 ano:
 * 
 * Apenas serão aceitos valores que cumpram o requisito acima.
 */

/**
 * @brief Método que valida duração.
 * 
 * Este método verifica se o requisito proposto está sendo cumprido.
 * Casa não seja cumprido, uma exceção do tipo 'std::invalid_argument' será lançada.
 * 
 * @param val duração a ser validada.
 * @throw std::invalid_argument Se o valor não estiver dentro do intervalo.
 */

bool Duracao::validar(int val){
    // Verifica se a duração está dentro do intervalo.
    if(val >= 0 && val <= 360){
        // Casjo esteja o método retorna 'True'.
        return true;
    } else{
        // Lança exceção.
        throw std::invalid_argument("Duração Invalida");
    }
}

    /**
     * @brief Define a duração.
     * 
     * Este método valida a duração.
     * Se o valor a duração for valida a mesma é armazenada em 'val', e o metodo retorna 'True'.
     * 
     * @param val duração a ser atribuída.
     * @return 'True' se a duração for válida.
     * @throw invalid_argument Se o valor for invalido.
     */

bool Duracao::setValor(int val){
    validar(val);       //Valida o valor fornecido
    this->val = val;    //Atribui o valor, se o mesmo for válido.
    return true;        //Retorna seucesso.
}
