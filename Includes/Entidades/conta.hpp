#ifndef CONTA_HPP_INCLUDED
#define CONTA_HPP_INCLUDED
<<<<<<< HEAD
#include "../Dominios/avaliacao.hpp"
#include "../Dominios/codigo.hpp"
#include "../Dominios/data.hpp"
#include "../Dominios/dinheiro.hpp"
#include "../Dominios/duracao.hpp"
#include "../Dominios/hora.hpp"
#include "../Dominios/nome.hpp"
#include "../Dominios/senha.hpp"
#include <stdexcept>
=======
#include "../dominios/codigo.hpp"
#include "../dominios/senha.hpp"

>>>>>>> refs/remotes/origin/main
/**
 * @brief Classe Conta.
 * 
 * A classe `Conta` representa uma conta que possui diversas propriedades, como:
 * - Código identificador.
 * - Senha.
 * 
 * Funcionalidades principais:
 * - Permite definir e obter cada uma dessas propriedades.
 * - Garantia de integridade por meio de tipos fortemente validados (ex.: `Codigo` e `senha`).
 */
class Conta
{
private:
    Codigo code;        ///< Código identificador da conta.
    Senha pass;         ///< Senha identificadora da conta.
public:
    /**
     * @brief Define o código da conta.
     * 
     * @param code Instância da classe `Codigo` que identifica a conta.
     */
    void setCode(const Codigo& code);
    /**
     * @brief Obtém o código da conta.
     * 
     * @return O código da conta como uma instância da classe `Codigo`.
     */
    Codigo getCode() const;
    /**
     * @brief Define a senha da conta.
     * 
<<<<<<< HEAD
     * @param senha Instância da classe `Senha` representando a senha.
=======
     * @param horario Instância da classe `Senha` representando a senha.
>>>>>>> refs/remotes/origin/main
     */
    void setPass(const Senha& pass);
    
    /**
     * @brief Obtém a senha da conta.
     * 
     * @return A senha como uma instância da classe `Senha`.
     */
    Senha getPass() const;

};
/**
 * @brief Define o código da conta.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `code`.
 * 
 * @param code Instância da classe `Codigo` que identifica a conta.
 */
inline void Conta::setCode(const Codigo& code)
{
    this->code = code;
}
/**
 * @brief Obtém o código da conta.
 * 
 * Implementação inline que retorna o código da conta.
 * 
 * @return Instância da classe `Codigo` que identifica a conta.
 */
inline Codigo Conta::getCode() const{return code;}
/**
 * @brief Define a senha da conta.
 * 
 * Implementação inline que atribui o valor fornecido ao atributo `pass`.
 * 
 * @param code Instância da classe `Senha` que identifica a senha.
 */
inline void Conta::setPass(const Senha& pass)
{
    this->pass = pass;
}
/**
 * @brief Obtém a senha da conta.
 * 
 * Implementação inline que retorna a senha da conta.
 * 
 * @return Instância da classe `Senha` que identifica a conta.
 */
inline Senha Conta::getPass() const {return pass;}

#endif // CONTA_HPP_INCLUDED