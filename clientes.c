#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
#include "util.h"

void menuClientes(void)
{
	int opt = 1;
	while (opt!=0)
	{
		system("@cls||clear");
		printf("/////////////////////////////////////////////////////////////\n");
		printf("//                                                         //\n");
		printf("//     ===============  MENU CLIENTES ===============      //\n");
		printf("//                                                         //\n");
		printf("//     1. CADASTRAR Clientes                               //\n");
		printf("//     2. PESQUISAR Clientes                               //\n");
		printf("//     3. ATUALIZAR Clientes                               //\n");
		printf("//     4. EXCLUIR   Clientes                               //\n");
		printf("//     0 - (Voltar)                                        //\n");
		printf("//                                                         //\n");
		printf("/////////////////////////////////////////////////////////////\n");
		printf("//                                                         //\n");
		printf("//     Digite a escolha desejada: ");
		scanf("%d", &opt);

		switch (opt)
		{
		case 1:
			telaCadastro_cliente();
			break;
		case 2:
			telaPesquisa_cliente();
			break;
		case 3:
			telaAtualiza_cliente();
			break;
		case 4:
			telaExclui_cliente();
			break;
		case 0:
			return;
		
		default:
			printf("Opcao invalida, tente novamente...");
			break;
		}
	}
}

// OPÇÕES -======
void telaCadastro_cliente(void)
{
	char nome[30];
	char cpf[12];
	char email[40];
	char tel[12];
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  CADASTRAR CLIENTES --- - - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    CPF do Cliente:     \n");
	printf("::    Nome do Cliente:    \n");
	printf("::    E-mail do Cliente:  \n");
	printf("::    Num. Telefone:      \n");
	printf("::    Tipo de Cabelo:     \n");
	printf("::                        \n");
	printf("::    1 - Prosseguir      \n");
	printf("::    0 - (Voltar)        \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }
	
}

void telaPesquisa_cliente(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  PESQUISAR CLIENTES --- - - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o CPF:    \n");
	printf("::                     \n");
	printf("::    1 - Prosseguir   \n");
	printf("::    0 - (Voltar)     \n");

	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaAtualiza_cliente(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  ATUALIZAR CLIENTES --- - - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o CPF:    \n");
	printf("::                     \n");
	printf("::    1 - Prosseguir   \n");
	printf("::    0 - (Voltar)     \n");

	int back;
	scanf("%d", &back);
	if (back==0) { return; }
}

void telaExclui_cliente(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  EXCLUIR CLIENTES --- - - - -      ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o CPF:    \n");
	printf("::                     \n");
	printf("::    1 - Prosseguir   \n");
	printf("::    0 - (Voltar)     \n");

	int back;
	scanf("%d", &back);
	if (back==0) { return; }
}

void telaExibe_cliente(void)
{
	printf("//                                                           \n");
	printf("//    Cliente Silveira da Clientela Gomes                    \n");
	printf("//                                                           \n");
	printf("//    E-mail: clientemuitoclient@ufrn.edu.br                 \n");
	printf("//    Telefone: 997451224                                    \n");
	printf("//    CPF: 52423419811                                       \n");
	printf("//    Tipo de Cabelo: Ondulado moreno                        \n");
	printf("//                                                           \n");
	printf("/////////////////////////////////////////////////////////////\n");
}