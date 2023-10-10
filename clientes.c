#include <stdio.h>
#include <stdlib.h>
#include "clientes.h"
#include "util.h"

// Var global
char pickClient;

void menuClientes(void)
{
	do {
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
		scanf("%1s", &pickClient); getchar();

		switch (pickClient) {
		case '1':
			telaCadastro_cliente();
			break;
		case '2':
			telaPesquisa_cliente();
			break;
		case '3':
			telaAtualiza_cliente();
			break;
		case '4':
			telaExclui_cliente();
			break;
		case '0':
			return;
		
		default:
			printf("Opcao invalida, tente novamente...");
			break;
		}
	} while (pickClient!='0');
}

// OPÇÕES -======
void telaCadastro_cliente(void)
{
	do {
		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - - ---  CADASTRAR CLIENTES --- - -     ::\n");
		printf("::                                             ::\n");
		printf("::    CPF do Cliente:                          ::\n");
		printf("::    Nome do Cliente:                         ::\n");
		printf("::    E-mail do Cliente:                       ::\n");
		printf("::    Num. Telefone:                           ::\n");
		printf("::    Tipo de Cabelo:                          ::\n");
		printf("::                      _   _   _   _   _   _  ::\n");
		printf("::    1 - Prosseguir   |                       ::\n");
		printf("::    0 - (Voltar)     | Resp.: ");
		scanf("%1s", &pickClient); getchar();

		switch (pickClient) {
		case '0':
			break;
		
		case '1':
			char nomeCliente[30];
			char cpfCliente[12];
			char emailCliente[40];
			char telCliente[12];
			char tipoCabelo[25];

			do {
				printf("# - CPF do Cliente    :");
				scanf("%s", cpfCliente); getchar();
			} while (!(validaCPF(cpfCliente)));
			
			do {
				printf("# - Nome do Cliente   :");
			} while (validaNome(nomeCliente));

			printf("# - E-mail do Cliente :");
			printf("# - Num. Telefone     :");
			printf("# - Tipo de Cabelo    :");
			break;
		
		default:
			printf("\n-- Nao ha ou nao eh permitido essa opcao. --\n");
			break;
		}
	} while (pickClient!='0');

	return;
}

void telaPesquisa_cliente(void)
{
	do {
		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - - ---  PESQUISAR CLIENTES --- - -     ::\n");
		printf("::                                             ::\n");
		printf("::    Digite o CPF:                            ::\n");
		printf("::                      _   _   _   _   _   _  ::\n");
		printf("::    1 - Prosseguir   |                       ::\n");
		printf("::    0 - (Voltar)     | Resp.: ");
		scanf("%1s", &pickClient); getchar();

		switch (pickClient) {
		case '0':
			break;
		
		case '1':
			printf("# - CPF do Cliente    :");
			break;
		
		default:
			printf("\n-- Nao ha ou nao eh permitido essa opcao. --\n");
			break;
		}

	} while (pickClient!='0');
	
	return;
}

void telaAtualiza_cliente(void)
{
	do {
		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - - ---  ATUALIZAR CLIENTES --- - -     ::\n");
		printf("::                                             ::\n");
		printf("::    Digite o CPF:                            ::\n");
		printf("::                      _   _   _   _   _   _  ::\n");
		printf("::    1 - Prosseguir   |                       ::\n");
		printf("::    0 - (Voltar)     | Resp.: ");
		scanf("%1s", &pickClient); getchar();
		
		switch (pickClient) {
		case '0':
			break;
		
		case '1':
			printf("# - CPF do Cliente    :");
			break;
		
		default:
			printf("\n-- Nao ha ou nao eh permitido essa opcao. --\n");
			break;
		}
	} while (pickClient!='0');
}

void telaExclui_cliente(void)
{
	do {
		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - - ---  EXCLUIR CLIENTES --- - -       ::\n");
		printf("::                                             ::\n");
		printf("::    Digite o CPF:                            ::\n");
		printf("::                      _   _   _   _   _   _  ::\n");
		printf("::    1 - Prosseguir   |                       ::\n");
		printf("::    0 - (Voltar)     | Resp.: ");
		scanf("%1s", &pickClient); getchar();

		switch (pickClient) {
		case '0':
			break;
		
		case '1':
			printf("# - CPF do Cliente    :");
			break;
		
		default:
			printf("\n-- Nao ha ou nao eh permitido essa opcao. --\n");
			break;
		}

	} while (pickClient!='0');

	return;
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