#ifndef DINHEIRO_HPP_INCLUDED
#define DINHEIRO_HPP_INCLUDED

/**
 * @brief Classe Dinheiro.
 * 
 * A classe `Data` representa um valor do tipo float e fornece métodos 
 * para validar, armazenar e recuperar os valores.
 *  
 * Funcionalidades principais:
 * - Validar e atribuir uma quantia.
 * - Retornar o valor armazenado de dinheiro.
 * 
 * Exceções:
 * - Caso um valor inválido seja fornecido, será lançada uma exceção do tipo `std::invalid_argument`.
 */

class Dinheiro {
    private:
        float valor;    ///< Atributo que armazena o valor como float.

        /**
         * @brief Método de validação de valor.
         * 
         * Este método verifica se o valor fornecido cumpre os requisitos de intervalo. 
         * Caso contrário, lança uma exceção.
         * 
         * @param valor quantia que deve está no intervalo de 00-200000.
         * @return true Se a valor for válido.
         * @throw std::invalid_argument Se o valo não cumprir o requisito.
         */

        bool validar(float valor);
    public:
        /**
         * @brief Define o valor da quantia.
         * 
         * Este método valida a variavel do tipo float que esteja dentro do intervalo. 
         * Se for válida, armazena o valor no atributo correspondente. 
         * Caso contrário, lança uma exceção.
         * 
         * @param valor Float que esteja dentro do intervalo.
         * @return True se o valor foi atribuído com sucesso.
         * @throw std::invalid_argument Se o valor fornecido não cumprir os requisitos.
         */
        bool setValor(float valor);
        /**
         * @brief Obtém o valor completo como ponto flutuante.
         * 
         * Retorna o valor armazenado.
         * 
         * @return Float contendo o valor armazenado.
         */
        float getValor() const;
};
/**
 * @brief Obtém o valor completo como ponto flutuante.
 * 
 * Implementação inline que retorna o valor armazenado.
 * 
 * @return Float contendo o valor.
 */
inline float Dinheiro :: getValor() const{
    return valor;
}

#endif // DINHEIRO_HPP_INCLUDE