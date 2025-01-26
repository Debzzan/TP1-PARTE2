#include "hora.hpp"

/**
 * Classe Hora
 * Esta classe implementa um horario, verificando hora e minuto:
 * - A hora pode receber valores inteiros de 00 até 23.
 * - O minuto pode receber valores intarios de 00 até 59.
 * - O formato de entrada é hora e minuto separados por '/',
 * por exemplo hora/minuto.
 * 
 * Apenas serão aceitos datas que cumprem os requisitos acima.
 */

/**
 * @brief Método que valida a hora.
 * 
 * Este método verifica se todos os requisitos propostos estão sendo cumpridos.
 * Casa não sejam cumpridos, uma exceção do tipo 'std::invalid_argument' será lançada.
 * 
 * @param horario Horario que deve ser validada.
 * @throw std::invalid_argument Se a hora não cumprir os requisistos.
 */

bool Horario::validarHorario(std::string horario) {
    int hora;       // Define hora como inteiro
    int minuto;     //Define minuto como inteiro
    std::sscanf(horario.c_str(), "%2d:%2d", &hora, &minuto);
    // Verifica se a hora está no intervalo.
    if(hora >= 0 && hora <= 23)
    {
        // Verifica se minuto está no intervalo.
        if(minuto >= 0 && minuto <=59)
        {
            // Caso as variaveis hora e minuto forem aceitas o método retorna 'true'.
            return true;
        }
        else
        {
                // Caso contrario lança exceção.
            throw std::invalid_argument("Horario incorreto.");
        }
    }
    else
    {
            // Caso contrario lança exceção.
            throw std::invalid_argument("Horario incorreto.");
    }
    
}

/**
* @brief Define o valor da hora.
* 
* Este método valida os valores fornecido.
* Se o valor recebido for valido o mesmo é armazenado em 'horario', e o metodo retorna 'True'.
* 
* @param horario hora a ser atribuída.
* @return 'True' se o valor for válido.
* @throw invalid_argument Se o valor não válido.
*/

bool Horario::setHorario(std::string horario) {
    validarHorario(horario);    //Valida o valor fornecido.
    this->horario = horario;    //Atribui o valor, se o mesmo for válido.
    return true;                //Retorna sucesso.
}

