//Código by ChatGPT

#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool validarNome(const char *nome) {
    // Verificar se o nome não é nulo
    if (nome == NULL) {
        return false;
    }

    // Verificar o comprimento do nome
    size_t comprimento = strlen(nome);
    if (comprimento < 3 || comprimento > 50) {
        return false;
    }

    // Verificar se o nome contém apenas letras e espaços
    for (size_t i = 0; i < comprimento; i++) {
        if (!isalpha(nome[i]) && nome[i] != ' ') {
            return false;
        }
    }

    return true;
}