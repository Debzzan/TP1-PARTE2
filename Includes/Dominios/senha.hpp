#ifndef SENHA_HPP_INCLUDED
#define SENHA_HPP_INCLUDED
#include <iostream>

/**
 * @brief Classe Senha.
 * 
 * A classe `Senha` representa um valor do tipo inteiro e fornece métodos 
 * para validar, armazenar e recuperar os valores.
 *  
 * Funcionalidades principais:
 * - Validar e atribuir uma senha.
 * - Retornar o valor armazenado de dinheiro.
 * 
 * Exceções:
 * - Caso um valor inválido seja fornecido, será lançada uma exceção do tipo `std::invalid_argument`.
 */

class Senha {
    private:
        std::string val_senha;          ///< Atributo que armazena o valor como string.
        /**
         * @brief Método de validação de senha.
         * 
         * Este método verifica se o valor fornecido cumpre os requisitos. 
         * Caso contrário, lança uma exceção.
         * 
         * @param val_senha a senha deve cumprir os requisitos.
         * @return true Se a senha for válido.
         * @throw std::invalid_argument Se o valo não cumprir o requisito.
         */
        bool validar(std::string val_senha);
    public:
        /**
         * @brief Define o valor da senha.
         * 
         * Este método valida a variavel do tipo inteiro que cumpra os requisitos. 
         * Se for válida, armazena o valor no atributo correspondente. 
         * Caso contrário, lança uma exceção.
         * 
         * @param val_senha Inteiro que esteja dentro do intervalo.
         * @return True se o valor foi atribuído com sucesso.
         * @throw std::invalid_argument Se o valor fornecido não cumprir os requisitos.
         */
        bool setValor(std::string val_senha);
        /**
         * @brief Obtém o valor completo.
         * 
         * Retorna o valor armazenado.
         * 
         * @return Inteiro contendo o valor armazenado.
         */
        std::string getValor() const;
};
/**
 * @brief Obtém o valor completo.
 * 
 * Implementação inline que retorna o valor armazenado.
 * 
 * @return Inteiro contendo o valor.
 */
inline std::string Senha :: getValor() const{
    return val_senha;
}

#endif // SENHA_HPP_INCLUDE