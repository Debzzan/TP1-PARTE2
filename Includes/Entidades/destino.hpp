#ifndef DESTINO_HPP_INCLUDED
#define DESTINO_HPP_INCLUDED

#include "../TP1-PARTE2/Includes/Dominios/avaliacao.hpp"
#include "../TP1-PARTE2/Includes/Dominios/codigo.hpp"
#include "../TP1-PARTE2/Includes/Dominios/data.hpp"
#include "../TP1-PARTE2/Includes/Dominios/dinheiro.hpp"
#include "../TP1-PARTE2/Includes/Dominios/duracao.hpp"
#include "../TP1-PARTE2/Includes/Dominios/hora.hpp"
#include "../TP1-PARTE2/Includes/Dominios/nome.hpp"
#include "../TP1-PARTE2/Includes/Dominios/senha.hpp"
#include <stdexcept>
using namespace std;

/**
 * @brief Classe Destino.
 * 
 * A classe `Destino` representa um destino turístico com propriedades relacionadas a:
 * - Identificação única (código).
 * - Nome do destino.
 * - Avaliação dada ao destino.
 * - Datas de chegada e partida.
 * 
 * Funcionalidades principais:
 * - Permitir a definição e recuperação de informações relacionadas ao destino.
 * - Garantir que as datas de chegada e partida sejam válidas.
 * 
 * Exceções:
 * - Caso a data de chegada seja posterior à data de partida, uma exceção do tipo `std::invalid_argument` será lançada.
 */
class Destino {
private:
    Codigo code;                ///< Código identificador único do destino.
    Nome name;                  ///< Nome do destino.
    Avaliacao avaliation;       ///< Avaliação atribuída ao destino.
    Data datainit;              ///< Data de chegada ao destino.
    Data datafim;               ///< Data de partida do destino.

    /**
     * @brief Valida as datas de chegada e partida.
     * 
     * Este método verifica se a data de chegada (`datainit`) é anterior ou igual à data de partida (`datafim`).
     * Caso contrário, lança uma exceção do tipo `std::invalid_argument`.
     * 
     * @param datainit Data de chegada ao destino.
     * @param datafim Data de partida do destino.
     * @return true Se as datas forem válidas.
     * @throw std::invalid_argument Se a data de chegada for posterior à data de partida.
     */
    bool validarDatas(Data datainit, Data datafim);

public:
    /**
     * @brief Define o código do destino.
     * 
     * @param code Instância da classe `Codigo` representando o código identificador do destino.
     */
    void setCode(const Codigo& code);

    /**
     * @brief Obtém o código do destino.
     * 
     * @return O código do destino como uma instância da classe `Codigo`.
     */
    Codigo getCode() const;

    /**
     * @brief Define o nome do destino.
     * 
     * @param name Instância da classe `Nome` representando o nome do destino.
     */
    void setName(const Nome& name);

    /**
     * @brief Obtém o nome do destino.
     * 
     * @return O nome do destino como uma instância da classe `Nome`.
     */
    Nome getName() const;

    /**
     * @brief Define a avaliação do destino.
     * 
     * @param avaliation Instância da classe `Avaliacao` representando a avaliação do destino.
     */
    void setAvaliation(const Avaliacao& avaliation);

    /**
     * @brief Obtém a avaliação do destino.
     * 
     * @return A avaliação do destino como uma instância da classe `Avaliacao`.
     */
    Avaliacao getAvaliation() const;

    /**
     * @brief Define as datas de chegada e partida do destino.
     * 
     * Este método valida as datas fornecidas e as atribui aos atributos `datainit` e `datafim`.
     * 
     * @param datainit Data de chegada ao destino.
     * @param datafim Data de partida do destino.
     * @return true Se as datas foram definidas com sucesso.
     * @throw std::invalid_argument Se as datas forem inválidas.
     */
    bool setDatas(const Data& datainit, const Data& datafim);

    /**
     * @brief Obtém a data de chegada ao destino.
     * 
     * @return A data de chegada como uma instância da classe `Data`.
     */
    Data getDatainit() const;

    /**
     * @brief Obtém a data de partida do destino.
     * 
     * @return A data de partida como uma instância da classe `Data`.
     */
    Data getDatafim() const;
};

/** Implementações inline **/

inline void Destino::setCode(const Codigo& code) {
    this->code = code;
}

inline Codigo Destino::getCode() const {
    return code;
}

inline void Destino::setName(const Nome& name) {
    this->name = name;
}

inline Nome Destino::getName() const {
    return name;
}

inline void Destino::setAvaliation(const Avaliacao& avaliation) {
    this->avaliation = avaliation;
}

inline Avaliacao Destino::getAvaliation() const {
    return avaliation;
}

inline Data Destino::getDatainit() const {
    return datainit;
}

inline Data Destino::getDatafim() const {
    return datafim;
}

inline bool Destino::setDatas(const Data& datainit, const Data& datafim) {
    validarDatas(datainit, datafim);
    this->datainit = datainit;
    this->datafim = datafim;
    return true;
}

inline bool Destino::validarDatas(Data datainit, Data datafim) {
    if (datainit.getAno() > datafim.getAno()) {
        throw std::invalid_argument("Data inicial não pode ser posterior à data final (Ano).");
    }
    if (datainit.getAno() == datafim.getAno() && datainit.getMes() > datafim.getMes()) {
        throw std::invalid_argument("Data inicial não pode ser posterior à data final (Mês).");
    }
    if (datainit.getAno() == datafim.getAno() && datainit.getMes() == datafim.getMes() &&
        datainit.getDia() > datafim.getDia()) {
        throw std::invalid_argument("Data inicial não pode ser posterior à data final (Dia).");
    }
    return true;
}

#endif // DESTINO_HPP_INCLUDED
