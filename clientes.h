#ifndef CLIENTES_H
#define CLIENTES_H

//- Assinatura das Funções -------
void telaCadastro_cliente(void);
void telaPesquisa_cliente(void);
void telaAtualiza_cliente(void);
void telaExclui_cliente(void);
void telaExibe_cliente(void);

void menuClientes(void);
//--------------------------

typedef struct cliente Cliente;
struct cliente {
    char nomeCliente[100];
    char cpfCliente[12];
    char emailCliente[256];
    char telCliente[12];
    char tipoCabelo[100];
};

#endif