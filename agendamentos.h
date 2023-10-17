#ifndef AGENDAMENTOS_H
#define AGENDAMENTOS_H

//- Assinatura das Funções -------
void telaCadastro_agend(void);
void telaPesquisa_agend(void);
void telaAtualiza_agend(void);
void telaExclui_agend(void);
void telaExibe_agend(void);

void menuAgendamentos(void);
//--------------------------

typedef struct agendamento Agendamento;
struct agendamento {
    int dd, mm, aaaa;
    char hora;
    float preco;
    int codAgend;
};

#endif