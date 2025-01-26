#ifndef DURACAO_HPP_INCLUDED
#define DURACAO_HPP_INCLUDED

/**
 * @brief Classe Duração.
 * 
 * A classe `Duração` representa um valor do tipo inteiro e fornece métodos 
 * para validar, armazenar e recuperar a duração.
 *  
 * Funcionalidades principais:
 * - Validar e atribuir uma duração.
 * - Retornar o valor armazenado.
 * 
 * Exceções:
 * - Caso um valor inválido seja fornecido, será lançada uma exceção do tipo `std::invalid_argument`.
 */

class Duracao {
    private:
        int val;        ///< Atributo que armazena o valor como inteiro.

        /**
         * @brief Método de validação da duração.
         * 
         * Este método verifica se a duração fornecida cumpre os requisitos de intervalo. 
         * Caso contrário, lança uma exceção.
         * 
         * @param val duração que deve está no intervalo de 0-360.
         * @return true Se a valor for válido.
         * @throw std::invalid_argument Se o valo não cumprir o requisito.
         */
        bool validar(int val);

    public:
    /**
         * @brief Define o valor da duração.
         * 
         * Este método valida a variavel do tipo inteiro que esteja dentro do intervalo. 
         * Se for válida, armazena o valor no atributo correspondente. 
         * Caso contrário, lança uma exceção.
         * 
         * @param val Inteiro que esteja dentro do intervalo.
         * @return True se o valor foi atribuído com sucesso.
         * @throw std::invalid_argument Se o valor fornecido não cumprir os requisitos.
         */
        bool setValor(int val);
        /**
         * @brief Obtém a duração completa.
         * 
         * Retorna o valor armazenado.
         * 
         * @return Inteiro contendo o valor armazenado.
         */
        int getValor() const;
/**
 * @brief Obtém a duração completa.
 * 
 * Implementação inline que retorna o valor armazenado.
 * 
 * @return Inteiro contendo o valor.
 */
};

inline int Duracao :: getValor() const{
    return val;

}


#endif //DURACAO_HPP_INCLUDED