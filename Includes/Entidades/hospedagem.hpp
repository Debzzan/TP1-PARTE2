#ifndef HOSPEDAGEM_HPP_INCLUDED
#define HOSPEDAGEM_HPP_INCLUDED

#include "../dominios/codigo.hpp"
#include "../dominios/nome.hpp"
#include "../dominios/avaliacao.hpp"
#include "../dominios/dinheiro.hpp"
using namespace std;

/**
 * @brief Classe Hospedagem.
 * 
 * A classe `Hospedagem` representa uma hospedagem com diversas propriedades:
 * - Código identificador único.
 * - Nome descritivo da hospedagem.
 * - Avaliação da hospedagem.
 * - Valor monetário associado à hospedagem.
 * 
 * Funcionalidades principais:
 * - Permite definir e obter cada uma dessas propriedades.
 * - Garantia de integridade por meio de tipos fortemente validados (ex.: `Codigo`, `Nome`).
 */
class Hospedagem {
private:
    Codigo code;            ///< Código identificador único da hospedagem.
    Nome name;              ///< Nome da hospedagem.
    Avaliacao avaliation;   ///< Avaliação da hospedagem.
    Dinheiro money;         ///< Valor monetário associado à hospedagem.

public:
    /**
     * @brief Define o código identificador da hospedagem.
     * 
     * @param code Instância da classe `Codigo` que identifica a hospedagem.
     */
    void setCode(const Codigo& code);

    /**
     * @brief Obtém o código identificador da hospedagem.
     * 
     * @return O código identificador da hospedagem como uma instância da classe `Codigo`.
     */
    Codigo getCode() const;

    /**
     * @brief Define o nome da hospedagem.
     * 
     * @param name Instância da classe `Nome` representando o nome da hospedagem.
     */
    void setName(const Nome& name);

    /**
     * @brief Obtém o nome da hospedagem.
     * 
     * @return O nome da hospedagem como uma instância da classe `Nome`.
     */
    Nome getName() const;

    /**
     * @brief Define a avaliação da hospedagem.
     * 
     * @param avaliation Instância da classe `Avaliacao` representando a avaliação da hospedagem.
     */
    void setAvaliation(const Avaliacao& avaliation);

    /**
     * @brief Obtém a avaliação da hospedagem.
     * 
     * @return A avaliação da hospedagem como uma instância da classe `Avaliacao`.
     */
    Avaliacao getAvaliation() const;

    /**
     * @brief Define o valor monetário associado à hospedagem.
     * 
     * @param money Instância da classe `Dinheiro` representando o valor monetário.
     */
    void setMoney(const Dinheiro& money);

    /**
     * @brief Obtém o valor monetário associado à hospedagem.
     * 
     * @return O valor monetário como uma instância da classe `Dinheiro`.
     */
    Dinheiro getMoney() const;
};

/**
 * @brief Define o código identificador da hospedagem.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `code`.
 * 
 * @param code Instância da classe `Codigo`.
 */
inline void Hospedagem::setCode(const Codigo &code) {
    this->code = code;
}

/**
 * @brief Obtém o código identificador da hospedagem.
 * 
 * Implementação inline que retorna o código da hospedagem.
 * 
 * @return Instância da classe `Codigo`.
 */
inline Codigo Hospedagem::getCode() const {
    return code;
}

/**
 * @brief Define o nome da hospedagem.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `name`.
 * 
 * @param name Instância da classe `Nome`.
 */
inline void Hospedagem::setName(const Nome &name) {
    this->name = name;
}

/**
 * @brief Obtém o nome da hospedagem.
 * 
 * Implementação inline que retorna o nome da hospedagem.
 * 
 * @return Instância da classe `Nome`.
 */
inline Nome Hospedagem::getName() const {
    return name;
}

/**
 * @brief Define a avaliação da hospedagem.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `avaliation`.
 * 
 * @param avaliation Instância da classe `Avaliacao`.
 */
inline void Hospedagem::setAvaliation(const Avaliacao &avaliation) {
    this->avaliation = avaliation;
}

/**
 * @brief Obtém a avaliação da hospedagem.
 * 
 * Implementação inline que retorna a avaliação da hospedagem.
 * 
 * @return Instância da classe `Avaliacao`.
 */
inline Avaliacao Hospedagem::getAvaliation() const {
    return avaliation;
}

/**
 * @brief Define o valor monetário associado à hospedagem.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `money`.
 * 
 * @param money Instância da classe `Dinheiro`.
 */
inline void Hospedagem::setMoney(const Dinheiro &money) {
    this->money = money;
}

/**
 * @brief Obtém o valor monetário associado à hospedagem.
 * 
 * Implementação inline que retorna o valor monetário da hospedagem.
 * 
 * @return Instância da classe `Dinheiro`.
 */
inline Dinheiro Hospedagem::getMoney() const {
    return money;
}

#endif // HOSPEDAGEM_HPP_INCLUDED
