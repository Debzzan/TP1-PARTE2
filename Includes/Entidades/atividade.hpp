#ifndef ATIVIDADE_HPP_INCLUDED
#define ATIVIDADE_HPP_INCLUDED

#include "../TP1-PARTE2/Includes/Dominios/avaliacao.hpp"
#include "../TP1-PARTE2/Includes/Dominios/codigo.hpp"
#include "../TP1-PARTE2/Includes/Dominios/data.hpp"
#include "../TP1-PARTE2/Includes/Dominios/dinheiro.hpp"
#include "../TP1-PARTE2/Includes/Dominios/duracao.hpp"
#include "../TP1-PARTE2/Includes/Dominios/hora.hpp"
#include "../TP1-PARTE2/Includes/Dominios/nome.hpp"
#include "../TP1-PARTE2/Includes/Dominios/senha.hpp"

/**
 * @brief Classe Atividade.
 * 
 * A classe `Atividade` representa uma atividade que possui diversas propriedades, como:
 * - Código identificador.
 * - Horário de início.
 * - Duração.
 * - Preço.
 * - Avaliação.
 * - Nome.
 * - Data da realização.
 * 
 * Funcionalidades principais:
 * - Permite definir e obter cada uma dessas propriedades.
 * - Garantia de integridade por meio de tipos fortemente validados (ex.: `Codigo`, `Data`, `Dinheiro`).
 */
class Atividade {
private:
    Codigo code;      ///< Código identificador da atividade.
    Horario horario;  ///< Horário de início da atividade.
    Duracao duracao;  ///< Duração da atividade.
    Dinheiro preco;   ///< Preço associado à atividade.
    Avaliacao aval;   ///< Avaliação da atividade.
    Nome nome;        ///< Nome.
    Data data;        ///< Data de realização da atividade.

public:
    /**
     * @brief Define o código da atividade.
     * 
     * @param code Instância da classe `Codigo` que identifica a atividade.
     */
    void setCode(const Codigo& code);

    /**
     * @brief Define o código da atividade.
     * 
     * @param code Instância da classe `Codigo` que identifica a atividade.
     */
    Codigo getCode() const;

    /**
     * @brief Define o horário de início da atividade.
     * 
     * @param horario Instância da classe `Horario` representando o horário.
     */
    void setHorario(const Horario& horario);

    /**
     * @brief Obtém o horário de início da atividade.
     * 
     * @return O horário da atividade como uma instância da classe `Horario`.
     */
    Horario getHorario() const;

    /**
     * @brief Define a duração da atividade.
     * 
     * @param duracao Instância da classe `Duracao` representando a duração.
     */
    void setDuracao(const Duracao& duracao);

    /**
     * @brief Obtém a duração da atividade.
     * 
     * @return A duração da atividade como uma instância da classe `Duracao`.
     */
    Duracao getDuracao() const;

    /**
     * @brief Define o preço da atividade.
     * 
     * @param preco Instância da classe `Dinheiro` representando o preço.
     */
    void setPreco(const Dinheiro& preco);

    /**
     * @brief Obtém o preço da atividade.
     * 
     * @return O preço da atividade como uma instância da classe `Dinheiro`.
     */
    Dinheiro getPreco() const;

    /**
     * @brief Define a avaliação da atividade.
     * 
     * @param aval Instância da classe `Avaliacao` representando a avaliação.
     */
    void setAval(const Avaliacao& aval);

    /**
     * @brief Obtém a avaliação da atividade.
     * 
     * @return A avaliação da atividade como uma instância da classe `Avaliacao`.
     */
    Avaliacao getAval() const;

    /**
     * @brief Define o nome da atividade.
     * 
     * @param nome Instância da classe `Nome` representando o nome.
     */
    void setNome(const Nome& nome);

    /**
     * @brief Obtém o nome da atividade.
     * 
     * @return O nome da atividade como uma instância da classe `Nome`.
     */
    Nome getNome() const;

    /**
     * @brief Define a data da atividade.
     * 
     * @param data Instância da classe `Data` representando a data.
     */
    void setData(const Data& data);

    /**
     * @brief Obtém a data da atividade.
     * 
     * @return A data da atividade como uma instância da classe `Data`.
     */
    Data getData() const;
};

/**
 * @brief Define o código da atividade.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `code`.
 * 
 * @param code Instância da classe `Codigo` que identifica a atividade.
 */
inline void Atividade::setCode(const Codigo& code) {
    this->code = code;
}

/**
 * @brief Obtém o código da atividade.
 * 
 * Implementação inline que retorna o código da atividade.
 * 
 * @return Instância da classe `Codigo` que identifica a atividade.
 */
inline Codigo Atividade::getCode() const {
    return code;
}

/**
 * @brief Define o horário de início da atividade.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `horario`.
 * 
 * @param horario Instância da classe `Horario`.
 */
inline void Atividade::setHorario(const Horario& horario) {
    this->horario = horario;
}

/**
 * @brief Obtém o horário de início da atividade.
 * 
 * Implementação inline que retorna o horário da atividade.
 * 
 * @return Instância da classe `Horario`.
 */
inline Horario Atividade::getHorario() const {
    return horario;
}

/**
 * @brief Define a duração da atividade.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `duracao`.
 * 
 * @param duracao Instância da classe `Duracao`.
 */
inline void Atividade::setDuracao(const Duracao& duracao) {
    this->duracao = duracao;
}

/**
 * @brief Obtém a duração da atividade.
 * 
 * Implementação inline que retorna a duração da atividade.
 * 
 * @return Instância da classe `Duracao`.
 */
inline Duracao Atividade::getDuracao() const {
    return duracao;
}

/**
 * @brief Define o preço da atividade.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `preco`.
 * 
 * @param preco Instância da classe `Dinheiro`.
 */
inline void Atividade::setPreco(const Dinheiro& preco) {
    this->preco = preco;
}

/**
 * @brief Obtém o preço da atividade.
 * 
 * Implementação inline que retorna o preço da atividade.
 * 
 * @return Instância da classe `Dinheiro`.
 */
inline Dinheiro Atividade::getPreco() const {
    return preco;
}

/**
 * @brief Define a avaliação da atividade.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `aval`.
 * 
 * @param aval Instância da classe `Avaliacao`.
 */
inline void Atividade::setAval(const Avaliacao& aval) {
    this->aval = aval;
}

/**
 * @brief Obtém a avaliação da atividade.
 * 
 * Implementação inline que retorna a avaliação da atividade.
 * 
 * @return Instância da classe `Avaliacao`.
 */
inline Avaliacao Atividade::getAval() const {
    return aval;
}

/**
 * @brief Define o nome da atividade.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `nome`.
 * 
 * @param nome Instância da classe `Nome`.
 */
inline void Atividade::setNome(const Nome& nome) {
    this->nome = nome;
}

/**
 * @brief Obtém o nome da atividade.
 * 
 * Implementação inline que retorna o nome da atividade.
 * 
 * @return Instância da classe `Nome`.
 */
inline Nome Atividade::getNome() const {
    return nome;
}

/**
 * @brief Define a data da atividade.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `data`.
 * 
 * @param data Instância da classe `Data`.
 */
inline void Atividade::setData(const Data& data) {
    this->data = data;
}

/**
 * @brief Obtém a data da atividade.
 * 
 * Implementação inline que retorna a data da atividade.
 * 
 * @return Instância da classe `Data`.
 */
inline Data Atividade::getData() const {
    return data;
}

#endif // ATIVIDADE_HPP_INCLUDED
