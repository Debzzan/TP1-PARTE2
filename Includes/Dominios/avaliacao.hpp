#ifndef AVALIACAO_HPP_INCLUDED
#define AVALIACAO_HPP_INCLUDED

#include <stdexcept>

/**
 * @brief Classe Avaliacao.
 * 
 * A classe `Avaliacao` representa uma avaliação que aceita um valor inteiro como entrada.
 * Os valores válidos estão no intervalo de 0 a 5. 
 * 
 * Funcionalidades principais:
 * - Validar e atribuir um valor de avaliação.
 * - Retornar o valor atribuído.
 * 
 * Exceções:
 * - Caso um valor inválido seja fornecido (fora do intervalo 0 a 5), a classe lançará
 *   uma exceção do tipo `std::invalid_argument`.
 */
class Avaliacao {
    private:
        int valor;              ///< Atributo que armazena o valor da avaliação.
        
        /**
         * @brief Método de validação de valores.
         * 
         * Este método verifica se o valor fornecido está no intervalo permitido (0 a 5).
         * Caso contrário, lança uma exceção do tipo `std::invalid_argument`.
         * 
         * @param valor Valor inteiro a ser validado.
         * @throw std::invalid_argument Se o valor estiver fora do intervalo válido.
         */
        void validar(int valor);

    public:
        /**
         * @brief Define o valor da avaliação.
         * 
         * Este método valida o valor fornecido. Se for válido, o armazena no atributo 
         * `valor` e retorna `true`. Caso contrário, lança uma exceção.
         * 
         * @param valor Valor inteiro a ser atribuído.
         * @return true Se o valor foi atribuído com sucesso.
         * @throw std::invalid_argument Se o valor não for válido.
         */
        bool setValor(int valor);

        /**
         * @brief Obtém o valor atual da avaliação.
         * 
         * Este método retorna o valor armazenado no atributo `valor`.
         * 
         * @return int O valor da avaliação.
         */
        int getValor() const;
};

/**
 * @brief Obtém o valor atual da avaliação.
 * 
 * Implementação do método `getValor`. Retorna o valor armazenado na variável `valor`.
 * 
 * @return int O valor da avaliação.
 */
inline int Avaliacao::getValor() const {
    return valor;
}

#endif // AVALIACAO_HPP_INCLUDED
