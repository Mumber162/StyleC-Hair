#ifndef FUNCIONARIOS_H
#define FUNCIONARIOS_H

//- Assinatura das Funções -------
void telaCadastro_func(void);
void telaPesquisa_func(void);
void telaAtualiza_func(void);
void telaExclui_func(void);
void telaExibe_func(void);

void menuFuncionarios(void);
//--------------------------

typedef struct funcionario Funcionario;
struct funcionario {
    char cpf[12];
    char nome[20];
    char email[45];
};

#endif