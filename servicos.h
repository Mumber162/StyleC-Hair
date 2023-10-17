#ifndef SERVICOS_H
#define SERVICOS_H

//- Assinatura das Funções -------
void telaCadastro_serv(void);
void telaPesquisa_serv(void);
void telaAtualiza_serv(void);
void telaExclui_serv(void);
void telaExibe_serv(void);

void menuServicos(void);
//--------------------------

typedef struct servico Servico;
struct servico {
    char tipoServico[15];
    int duracaoServico;
    int codServico;
};

#endif