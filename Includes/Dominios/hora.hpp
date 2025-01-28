#ifndef hora_HPP_INCLUDED
#define hora_HPP_INCLUDED
#include <stdexcept>

/**
 * @brief Classe Hora.
 * 
 * A classe `Hora` representa um horario no formato `HH/MM` e fornece métodos 
 * para validar, armazenar e recuperar os valores de hora e minuto. 
 * 
 * Requisitos para a hora:
 * - Deve receber uma string contendo hora e minuto separados por `/`.
 * - O valor da hora deve estar no intervalo `00/23`.
 * - O valor do minuto deve estar no intervalo `00-59`.
 * 
 * Funcionalidades principais:
 * - Validar e atribuir um valor de hora.
 * - Retornar o valor armazenado da hora e minuto separadamente.
 * 
 * Exceções:
 * - Caso um valor inválido seja fornecido, será lançada uma exceção do tipo `std::invalid_argument`.
 */
class Horario {
    private:
        std::string horario;                    ///< Atributo que armazena a hora no formato string.

        /**
         * @brief Método de validação de hora.
         * 
         * Este método verifica se o valor fornecido cumpre os requisitos de formato e intervalo 
         * para hora e minuto. Caso contrário, lança uma exceção.
         * 
         * @param horario String que representa a hora no formato `HH/MM`.
         * @return true Se a hora for válida.
         * @throw std::invalid_argument Se a hora não cumprir os requisitos.
         */

        bool validarHorario(std::string horario);

    public:

        /**
         * @brief Define o valor da hora.
         * 
         * Este método valida a string fornecida no formato `HH/MM`. 
         * Se for válida, armazena a data no atributo correspondente. 
         * Caso contrário, lança uma exceção.
         * 
         * @param horario String representando a hora no formato `HH/MM`.
         * @return true Se a hora foi atribuída com sucesso.
         * @throw std::invalid_argument Se o valor fornecido não cumprir os requisitos.
         */

        bool setHorario(std::string horario);

        /**
        * @brief Obtém a data completa como string.
        * 
        * Retorna o valor armazenado da hora no formato `HH/MM`.
        * 
        * @return String contendo a hora formatada.
        */

        std::string getHorario() const;
        
        /**
        * @brief Obtém o valor da hora.
        * 
        * Retorna o valor do hora extraído da string armazenada.
        * 
        * @return String representando a hora.
        */
};
    /**
    * @brief Obtém a hora completa como string.
    * 
    * Implementação inline que retorna a hora armazenada no formato `HH/MM/`.
    * 
    * @return String contendo a hora formatada.
    */
inline std::string Horario :: getHorario() const{
    return horario;
}


#endif //HORA_HPP_INCLUDED
