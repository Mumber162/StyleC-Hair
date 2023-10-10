#ifndef UTIL_H
#define UTIL_H

//- Assinatura das Funções -------
void lerNome(char *nome);
void lerCPF(char *cpf);
void lerEmail(char *email);

int ehLetra(char c);
int validaNome(char *nome);

int ehDigit(char *stringDigit);
int validaNome(char *nome);
int validaCPF(char *cpf);
int validaData(int d, int m, int a);
int bissexto(int ano);
//-----------------------------

#endif