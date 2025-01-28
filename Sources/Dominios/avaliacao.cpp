#include "avaliacao.hpp"

/**
 * Classe Avaliação:
 * Esta classe implementa um mecanismo para validar e atribuir valores inteiros 
 * utilizados em avaliações. Somente os números de 0 a 5 são aceitos como valores válidos.
 */

/**
 * @brief Método que valida um valor de avaliação.
 * 
 * Este método verifica se o valor fornecido está no intervalo permitido de 0 a 5.
 * Caso o valor não seja válido, uma exceção do tipo `std::invalid_argument` será lançada.
 * 
 * @param valor Valor inteiro a ser validado.
 * @throw std::invalid_argument Se o valor não estiver entre 0 e 5.
 */
void Avaliacao::validar(int valor) {
    // Verifica se o valor está entre 0 e 5.
    if (valor == 0 || valor == 1 || valor == 2 || valor == 3 || valor == 4 || valor == 5) {
        // Valor válido, nenhuma ação necessária.
    } else {
        // Lança exceção se o valor for inválido.
        throw std::invalid_argument("Número invalido::Avaliação");
    }
}

/**
 * @brief Define o valor da avaliação.
 * 
 * Este método valida o valor fornecido e, caso ele seja válido, o armazena no atributo 
 * da classe. O método retorna `true` em caso de sucesso.
 * 
 * @param valor Valor inteiro a ser atribuído.
 * @return true Se o valor foi atribuído com sucesso.
 * @throw std::invalid_argument Se o valor não for válido (delegado ao método `validar`).
 */
bool Avaliacao::setValor(int valor) {
    validar(valor);         // Valida o valor fornecido.
    this->valor = valor;    // Atribui o valor ao atributo da classe.
    return true;            // Retorna sucesso.
}
