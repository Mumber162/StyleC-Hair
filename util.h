#ifndef UTIL_H
#define UTIL_H

//- Assinatura das Funções -------
void lerNome(char *nome);
void lerCPF(char *cpf);
void lerEmail(char *email);


int validaCPF(char *cpf);
int validaData(int d, int m, int a);
int bissexto(int ano);
//-----------------------------

#endif