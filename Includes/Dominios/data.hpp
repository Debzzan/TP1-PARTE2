#ifndef DATA_HPP_INCLUDED
#define DATA_HPP_INCLUDED

#include <sstream>
#include <iomanip>

/**
 * @brief Classe Data.
 * 
 * A classe `Data` representa uma data no formato `DD/MM/AA` e fornece métodos 
 * para validar, armazenar e recuperar os valores de dia, mês e ano. 
 * 
 * Requisitos para a data:
 * - Deve receber uma string contendo dia, mês e ano separados por `/`.
 * - O valor do dia deve estar no intervalo `01-31`.
 * - O valor do mês deve estar no intervalo `01-12`.
 * - O valor do ano deve estar no intervalo `00-99`.
 * 
 * Funcionalidades principais:
 * - Validar e atribuir um valor de data.
 * - Retornar o valor armazenado da data, dia, mês e ano separadamente.
 * 
 * Exceções:
 * - Caso um valor inválido seja fornecido, será lançada uma exceção do tipo `std::invalid_argument`.
 */
class Data {
    private:
        int dia;               ///< Atributo que armazena o dia como inteiro.
        int mes;               ///< Atributo que armazena o mês como inteiro.
        int ano;               ///< Atributo que armazena o ano como inteiro.
        std::string data;      ///< Atributo que armazena a data no formato string.

        /**
         * @brief Método de validação de data.
         * 
         * Este método verifica se o valor fornecido cumpre os requisitos de formato e intervalo 
         * para dia, mês e ano. Caso contrário, lança uma exceção.
         * 
         * @param data String que representa a data no formato `DD/MM/AA`.
         * @return true Se a data for válida.
         * @throw std::invalid_argument Se a data não cumprir os requisitos.
         */
        bool validarData(std::string data);

    public:
        /**
         * @brief Define o valor da data.
         * 
         * Este método valida a string fornecida no formato `DD/MM/AA`. 
         * Se for válida, armazena a data no atributo correspondente. 
         * Caso contrário, lança uma exceção.
         * 
         * @param data String representando a data no formato `DD/MM/AA`.
         * @return true Se a data foi atribuída com sucesso.
         * @throw std::invalid_argument Se o valor fornecido não cumprir os requisitos.
         */
        bool setData(std::string data);

        /**
         * @brief Obtém a data completa como string.
         * 
         * Retorna o valor armazenado da data no formato `DD/MM/AA`.
         * 
         * @return String contendo a data formatada.
         */
        std::string getData();

        /**
         * @brief Obtém o valor do dia.
         * 
         * Retorna o valor do dia extraído da string armazenada.
         * 
         * @return Inteiro representando o dia.
         */
        int getDia();

        /**
         * @brief Obtém o valor do mês.
         * 
         * Retorna o valor do mês extraído da string armazenada.
         * 
         * @return Inteiro representando o mês.
         */
        int getMes();

        /**
         * @brief Obtém o valor do ano.
         * 
         * Retorna o valor do ano extraído da string armazenada.
         * 
         * @return Inteiro representando o ano.
         */
        int getAno();
};

/**
 * @brief Obtém a data completa como string.
 * 
 * Implementação inline que retorna a data armazenada no formato `DD/MM/AA`.
 * 
 * @return String contendo a data formatada.
 */
inline std::string Data::getData() {
    return data;
}

/**
 * @brief Obtém o valor do dia.
 * 
 * Implementação inline que converte a string da data em inteiros e retorna o dia.
 * 
 * @return Inteiro representando o dia.
 */
inline int Data::getDia() {
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    return dia;
}

/**
 * @brief Obtém o valor do mês.
 * 
 * Implementação inline que converte a string da data em inteiros e retorna o mês.
 * 
 * @return Inteiro representando o mês.
 */
inline int Data::getMes() {
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    return mes;
}

/**
 * @brief Obtém o valor do ano.
 * 
 * Implementação inline que converte a string da data em inteiros e retorna o ano.
 * 
 * @return Inteiro representando o ano.
 */
inline int Data::getAno() {
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    return ano;
}

#endif // DATA_HPP_INCLUDED
