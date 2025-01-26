#ifndef CODIGO_HPP_INCLUDED
#define CODIGO_HPP_INCLUDED
#include <iostream>

/**
 * @brief Classe Código.
 * 
 * A classe 'Código' analisa um código que deve cumprir os seguintes requisitos.
 * - Deve ter 6 caracteres.
 * - Deve conter apenas números ou letras (dodendo ser minusculas ou maiusculas).
 * 
 * Funcionalidades principais:
 * - Validar e atribuir um valor de codigo.
 * - Retorna o valor atribuído.
 * 
 * Exceções:
 * - Caso um valor invalido seja fornecido será lancado um exceção do tipo 'std::invalid_argument'.
 */

class Codigo
{
private:
    std::string str;    ///< Atributo que armazena o valor codigo.

    /**
     * @brief Método de validação.
     * 
     * Este método verifica se o valor fornecido está cumprindo os requisitos.
     * Caso contrário, lança uma exceção do tipo 'std::invalid_argument'.
     * 
     * @param codigo Codigo a ser validado.
     * @return true Se o códig sor válido.
     * @throw std::invalid_argument Se o valor não cumprir os requisitos.
     */
    void validar(std::string str);
public:
    /**
     * @brief Define o valor do código.
     * 
     * Este método valida o código fornecido. Se for validado o valor é armazenado, e o método retorna 'true'.
     * Caso não seja é lançado um exceção.
     * 
     * @param codigo Valor do tipo string a ser atribuido.
     * @return true Se o valor foi atribuido com sucesso.
     * @throw std::invalid_argument Se o valor fornecido não cumprir os requisitos.
     */
    bool setValor(std::string str);
    /**
     * @brief  Obtém o valor atual de código.
     * 
     * Este método retorna o valor armazenado no atributo 'str'.
     * 
     * @return string O valor do codigo.
     */
    std::string getValor() const;
};

/**
 * @brief Obtém o valor atual de codigo.
 * 
 * Implementação do método 'getValor'. retorna o valor armazenado na variável 'str'.
 * 
 * @return O valor codigo do tipo string.
 */
inline std::string Codigo :: getValor() const{
    return str;

}

#endif // CODIGO_HPP_INCLUDE