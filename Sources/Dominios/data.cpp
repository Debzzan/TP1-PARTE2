#include "data.hpp"
#include <cstdio>

/**
 * Classe Data
 * Esta classe implementa uma data, verificando dia, mes e ano:
 * - Dia pode receber valores inteiros de 01 até 31.
 * - Mês pode receber valores intarios de 01 até 12.
 * - Ano pode receber valores inteiros de 00 até 99.
 * - O formato de entrada é dia, mes e ano separados por '/',
 * por exemplo dia/mes/ano.
 * 
 * Alem disso também é garantido a funcionalidade da classe para anos bissexto.
 * 
 * Apenas serão aceitos datas que cumprem os requisitos acima.
 */

/**
 * @brief Método que valida a data.
 * 
 * Este método verifica se todos os requisitos propostos estão sendo cumpridos.
 * Casa não sejam cumpridos, uma exceção do tipo 'std::invalid_argument' será lançada.
 * 
 * @param data Data que deve ser validada.
 * @throw std::invalid_argument Se a data não cumprir os requisistos.
 */

bool Data::validarData(std::string data)  {
    int dia;
    int mes;
    int ano;
    std::sscanf(data.c_str(), "%2d/%2d/%2d", &dia, &mes, &ano);
    int anobis = ano % 4;
// Verifica se o valor ano está dentro do intervalo 00-99.
if(ano >= 00 && ano <= 99)
{
    // Verifica se o valor mes está dentro da intervalo 01-12.
    if(mes >=01 && mes <= 12)
    {
        // Verifica os meses que possuem 31 dias.
        if(mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
        {
            // Verifica se o valor dia está dentro do intervalo 01-31.
            if(dia >= 1 && dia <= 31)
            {
                // Caso as variaveis dia, mes e ano forem aceitas o método retorna 'true'.
                return true;
            }
            else
            {
                // Lança exceção.
                throw std::invalid_argument("Data Invalida");
            }
        }
        // Verifica se é o mes de fevereiro.
        else if(mes == 02)
    {   
        // Se o mes for fevereiro e o ano for bissexto o tratamento para a data é diferente.
        if(anobis == 0)
        {
            // No mes de fevereiro em anos bissexto a data pode variar de 01-29.
            if(dia >= 01 && dia <= 29)
            {
                // Caso as variaveis dia, mes e ano forem aceitas o método retorna 'true'.
                return true; 
            }
            else
            {
                // Lança exceção.
                throw std::invalid_argument("Data Invalida");
            }
        }
        else
        {
            // Caso não seja ano bissexto o mes de fevereiro é tratado normalmente.
            if(dia >=01 && dia <= 28)
            {
                // Caso as variaveis dia, mes e ano forem aceitas o método retorna 'true'.
                return true; 
            }
            else
            {
                // Lança exceção.
                throw std::invalid_argument("Data Invalida");
            }
        }
    }
        // Verificação para os meses com 30 dias. 
        else
            {
            // Verifica se o valor dia está dentro do intervalo 01-30.
            if(dia >= 01 && dia <= 30)
            {
                return true;
            }
            else
            {
                // Lança exceção
                throw std::invalid_argument("Data Invalida");
            }
            }
    }
    else
    {
        // Lança exceção
        throw std::invalid_argument("Data Invalida");
    }
}
else
{
    // Lança exceção
    throw std::invalid_argument("Data Invalida");
}

            }
    


/**
 * @brief Define o valor da data.
 * 
 * Este método valida os valores fornecido.
 * Se o valor recebido for valido o mesmo é armazenado em 'data', e o metodo retorna 'True'.
 * 
 * @param data data a ser atribuída.
 * @return 'True' se o valor for válido.
 * @throw invalid_argument Se o valor não válido.
 */

bool Data::setData(std::string data) {
    validarData(data);      //Valida o valor fornecido.
    this -> data = data;    //Atribui o valor, se o mesmo for válido.
    return true;            //Retorna sucesso.
}


