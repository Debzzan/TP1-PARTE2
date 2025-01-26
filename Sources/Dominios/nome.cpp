#include "nome.hpp"

/**
 * Classe Nome
 * Esta classe verifica se o nome possui até 30 caracteres:
 * 
 * Apenas serão aceitos valores que cumpram o requisito acima.
 */

/**
 * @brief Método que valida nome.
 * 
 * Este método verifica se o requisito proposto está sendo cumprido.
 * Casa não seja cumprido, uma exceção do tipo 'std::invalid_argument' será lançada.
 * 
 * @param nome nome a ser validado.
 * @throw std::invalid_argument Se o nome tiver mais de 30 caracteres.
 */

bool Nome::validar(std::string nome){
    //Verifica se o nome tem mais que 30 caracteres.
    if (nome.length() > 30)
    {
        // Lança exceção.
        throw std::invalid_argument("Nome Incorreto.");
    } else{
        // Caso o nome tenha até 30 o método retorna 'true'.
        return true;
    }
    
}

/**
 * @brief Define o nome.
 * 
 * Este método valida o nome fornecido.
 * Se o nome recebido for valido o mesmo é armazenado em 'nome', e o metodo retorna 'True'.
 * 
 * @param nome nome a ser atribuído.
 * @return 'True' se o nome for válido.
 * @throw invalid_argument Se o nome for inválido.
 */

bool Nome::setValor(std::string nome){
    validar(nome);          //Valida o nome fornecido.
    this->nome = nome;      //Atribui o valor, se o mesmo for válido
    return true;            //Retorna secesso.
}