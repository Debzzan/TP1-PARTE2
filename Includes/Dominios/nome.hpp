#ifndef NOME_HPP_INCLUDED
#define NOME_HPP_INCLUDED
#include <iostream>

/**
 * @brief Classe Nome.
 * 
 * A classe `Nome` representa um valor do tipo string e fornece métodos 
 * para validar, armazenar e recuperar os valores.
 *  
 * Funcionalidades principais:
 * - Validar e atribuir um nome.
 * - Retornar o nome armazenado.
 * 
 * Exceções:
 * - Caso um valor inválido seja fornecido, será lançada uma exceção do tipo `std::invalid_argument`.
 */

class Nome {
    private:
        std::string nome;               ///< Atributo que armazena o valor como string.
        /**
         * @brief Método de validação do nome.
         * 
         * Este método verifica se o nome fornecido cumpre os requisitos de intervalo. 
         * Caso contrário, lança uma exceção.
         * 
         * @param nome string que deve conter até 30 caracteres.
         * @return true Se o nome for válido.
         * @throw std::invalid_argument Se a string não cumprir o requisito.
         */
        bool validar(std::string nome);
    public:
        /**
         * @brief Define o nome.
         * 
         * Este método valida a variavel do tipo string que esteja dentro do intervalo. 
         * Se for válida, armazena o valor no atributo correspondente. 
         * Caso contrário, lança uma exceção.
         * 
         * @param nome String que esteja dentro do intervalo.
         * @return True se o nome foi atribuído com sucesso.
         * @throw std::invalid_argument Se o valor fornecido não cumprir os requisitos.
         */
        bool setValor(std::string nome);
        /**
         * @brief Obtém o nome completo.
         * 
         * Retorna o valor armazenado.
         * 
         * @return String contendo o valor armazenado.
         */
        std::string getValor() const;

};
/**
 * @brief Obtém o valor completo.
 * 
 * Implementação inline que retorna o nome armazenado.
 * 
 * @return String contendo o valor.
 */
inline std::string Nome :: getValor() const{
    return nome;
}
#endif // NOME_HPP_INCLUDE