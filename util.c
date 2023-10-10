#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

// ====== LEITURAS -----------
void lerCPF(char *cpf)
{
    printf("");
}

void lerNome(char *nome)
{
    printf("");
}
void lerEmail(char *email)
{
    printf("");
}

// ======= VALIDAÇÕES -----------
int ehLetra(char c) { // aplicado com base no código de "Flavius Gorgonio"
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else if (c >= 'a' && c <= 'z') {
        return 1;
    } else {
        return 0;
    }
}

int validaNome(char *nome) // aplicado com base no código de "Flavius Gorgonio"
{
    for (int i=0; nome[i]!='\0'; i++) {
        if (!ehLetra(nome[i])) {
            return 0;
        }
    }
    return 1;
}

int ehDigit(char *stringDigit) //adaptado Chat GPT
{
    // se todos os caracteres são dígitos
    for (int i = 0; i < 11; i++) {
        if (stringDigit[i] < '0' || stringDigit[i] > '9') {
            printf("\n-- Apenas numeros por favor! --\n");
            return 0;
        }
    }
}
int validaCPF(char *cpf) //codigo adaptado do Chat GPT
{
    // se tem 11 dígitos
    if (strlen(cpf) != 11) {
        printf("\n-- Precisa conter 11 digitos! --\n");
        return 0;
    }

    if (!(ehDigit(cpf)))
    {
        return 0;
    }

    // Calcula o primeiro dígito verificador
    int soma = 0;
    for (int i = 0; i < 9; i++) {
        soma += (cpf[i] - '0') * (10 - i);
    }
    int firstDigit = 11 - (soma % 11);

    // se primeiro dígito é válido
    if (firstDigit >= 10) {
        firstDigit = 0;
    }
    if (cpf[9] - '0' != firstDigit) {
        return 0;
    }

    // egundo dígito
    soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += (cpf[i] - '0') * (11 - i);
    }
    int secndDigit = 11 - (soma % 11);

    // se segundo dígito é válido
    if (secndDigit >= 10) {
        secndDigit = 0;
    }
    if (cpf[10] - '0' != secndDigit) {
        return 0;
    }

    // até aqui, o CPF é válido
    return 1;
}

int validaData(int d, int m, int a)
{ //Adaptação do código de @flaviusgorgonio

    int maiorDia;

    // Casos padrões
    if ((d<0 || d>31) || (m<0 || m>12) || (a>2023))
    {
        return 0;
    }
    if (m == 2)
    {
        if (bissexto(a)) {
            maiorDia = 29;
        } else {
            maiorDia = 28;
        }
    } else if (m == 4 || m == 6 || m == 9 || m == 11) {
        maiorDia = 30;
    } else {
        maiorDia = 31;
    }

    if (d > maiorDia) {
        return 0;
    }

    return 1;
}

int bissexto(int ano)
{
    if (((ano%4 == 0) && (ano%100 != 0)) || (ano%400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}