#ifndef VIAGEM_HPP_INCLUDED
#define VIAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"
using namespace std;

/**
 * @brief Classe Viagem.
 * 
 * A classe `Viagem` representa uma viagem com as seguintes propriedades:
 * - Código identificador único da viagem.
 * - Nome descritivo da viagem.
 * - Avaliação da viagem.
 * 
 * Funcionalidades principais:
 * - Permite definir e obter cada uma dessas propriedades.
 * - Garantia de integridade por meio de tipos validados (ex.: `Codigo`, `Nome`, `Avaliacao`).
 */
class Viagem {
private:
    Codigo code;            ///< Código identificador único da viagem.
    Nome name;              ///< Nome descritivo da viagem.
    Avaliacao avaliation;   ///< Avaliação atribuída à viagem.

public:
    /**
     * @brief Define o código identificador da viagem.
     * 
     * @param code Instância da classe `Codigo` que identifica a viagem.
     */
    void setCode(const Codigo& code);

    /**
     * @brief Obtém o código identificador da viagem.
     * 
     * @return O código identificador da viagem como uma instância da classe `Codigo`.
     */
    Codigo getCode() const;

    /**
     * @brief Define o nome da viagem.
     * 
     * @param name Instância da classe `Nome` representando o nome da viagem.
     */
    void setName(const Nome& name);

    /**
     * @brief Obtém o nome da viagem.
     * 
     * @return O nome da viagem como uma instância da classe `Nome`.
     */
    Nome getName() const;

    /**
     * @brief Define a avaliação da viagem.
     * 
     * @param avaliation Instância da classe `Avaliacao` representando a avaliação da viagem.
     */
    void setAvaliation(const Avaliacao& avaliation);

    /**
     * @brief Obtém a avaliação da viagem.
     * 
     * @return A avaliação da viagem como uma instância da classe `Avaliacao`.
     */
    Avaliacao getAvaliation() const;
};

/**
 * @brief Define o código identificador da viagem.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `code`.
 * 
 * @param code Instância da classe `Codigo`.
 */
inline void Viagem::setCode(const Codigo &code) {
    this->code = code;
}

/**
 * @brief Obtém o código identificador da viagem.
 * 
 * Implementação inline que retorna o código da viagem.
 * 
 * @return Instância da classe `Codigo`.
 */
inline Codigo Viagem::getCode() const {
    return code;
}

/**
 * @brief Define o nome da viagem.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `name`.
 * 
 * @param name Instância da classe `Nome`.
 */
inline void Viagem::setName(const Nome &name) {
    this->name = name;
}

/**
 * @brief Obtém o nome da viagem.
 * 
 * Implementação inline que retorna o nome da viagem.
 * 
 * @return Instância da classe `Nome`.
 */
inline Nome Viagem::getName() const {
    return name;
}

/**
 * @brief Define a avaliação da viagem.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `avaliation`.
 * 
 * @param avaliation Instância da classe `Avaliacao`.
 */
inline void Viagem::setAvaliation(const Avaliacao &avaliation) {
    this->avaliation = avaliation;
}

/**
 * @brief Obtém a avaliação da viagem.
 * 
 * Implementação inline que retorna a avaliação da viagem.
 * 
 * @return Instância da classe `Avaliacao`.
 */
inline Avaliacao Viagem::getAvaliation() const {
    return avaliation;
}

#endif // VIAGEM_HPP_INCLUDED
