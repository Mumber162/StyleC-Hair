#include <stdio.h>
#include <stdlib.h>
#include "servicos.h"
#include "util.h"

// Var global
char pickServ;

void menuServicos(void)
{
	do {
		system("@cls||clear");
		printf("/////////////////////////////////////////////////////////////\n");
		printf("//                                                         //\n");
		printf("//     ===============  MENU SERVICOS ===============      //\n");
		printf("//                                                         //\n");
		printf("//     1. CADASTRAR Servico                                //\n");
		printf("//     2. PESQUISAR Servico                                //\n");
		printf("//     3. ATUALIZAR Servico                                //\n");
		printf("//     4. EXCLUIR   Servico                                //\n");
		printf("//     0 - (Voltar)                                        //\n");
		printf("//                                                         //\n");
		printf("/////////////////////////////////////////////////////////////\n");
		printf("//                                                         //\n");
		printf("//     Digite a escolha desejada: ");
		scanf("%1s", &pickServ); getchar();

		switch (pickServ) {
		case '1':
			telaCadastro_serv();
			break;
		case '2':
			telaPesquisa_serv();
			break;
		case '3':
			telaAtualiza_serv();
			break;
		case '4':
			telaExclui_serv();
			break;
		case '0':
			return;
		
		default:
			printf("### Opcao invalida, tente novamente... ###\n");
			esperar();
			break;
		}
	} while (pickServ!='0');

	return;
}

// OPÇÕES -======
void telaCadastro_serv(void)
{
	do {
		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - - ---  CADASTRAR SERVICOS --- - -     ::\n");
		printf("::                                             ::\n");
		printf("::    Tipo de Servico:                         ::\n");
		printf("::    Duracao media de Servico (em min):       ::\n");
		printf("::    Codigo do Servico:                       ::\n");
		printf("::                      _ _ _ _ _ _ _ _ _ _ _  ::\n");
		printf("::    1 - Prosseguir   |                       ::\n");
		printf("::    0 - (Voltar)     | Resp.: ");
		scanf("%1s", &pickServ); getchar();

		switch (pickServ) {
		case '0':
			break;
		case '1':
			char tipoServico[15];
			int duracaoServico;
			int codServico;

			printf("# - Tipo de Servico                   : ");
			printf("# - Duracao media de Servico (em min) : ");
			printf("# - Codigo do Servico                 : ");

			break;

		default:
			printf("\n### - ! Nao ha ou nao eh permitido essa opcao. ! ###\n");
			esperar();
			
			break;
		}
	} while (pickServ!='0');

	return;
}

void telaPesquisa_serv(void)
{
	do {
		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - - ---  PESQUISAR SERVICOS --- - -     ::\n");
		printf("::                                             ::\n");
		printf("::    Codigo do Servico:                       ::\n");
		printf("::                       _   _   _   _   _   _ ::\n");
		printf("::    1 - Prosseguir   |                       ::\n");
		printf("::    0 - (Voltar)     | Resp.: ");
		scanf("%1s", &pickServ); getchar();

		switch (pickServ) {
		case '0':
			break;
		case '1':
			printf("# - Codigo do Servico: ");

			break;

		default:
			printf("\n### - ! Nao ha ou nao eh permitido essa opcao. ! ###\n");
			break;
		}
	
	} while (pickServ!='0');

	return;
}

void telaAtualiza_serv(void)
{
	do {
		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - - ---  ATUALIZAR SERVICOS --- - -     ::\n");
		printf("::                                             ::\n");
		printf("::    Codigo do Servico:                       ::\n");
		printf("::                       _   _   _   _   _   _ ::\n");
		printf("::    1 - Prosseguir   |                       ::\n");
		printf("::    0 - (Voltar)     | Resp.: ");
		scanf("%1s", &pickServ); getchar();

		switch (pickServ) {
		case '0':
			break;
		case '1':
			printf("# - Codigo do Servico: ");

			break;

		default:
			printf("\n### - ! Nao ha ou nao eh permitido essa opcao. ! ###\n");
			break;
		}
	} while (pickServ!='0');
	
	return;
}

void telaExclui_serv(void)
{
	do {
		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - - ---  EXCLUIR SERVICOS --- - -       ::\n");
		printf("::                                             ::\n");
		printf("::    Codigo do Servico:                       ::\n");
		printf("::                       _   _   _   _   _   _ ::\n");
		printf("::    1 - Prosseguir   |                       ::\n");
		printf("::    0 - (Voltar)     | Resp.: ");
		
		switch (pickServ) {
		case '0':
			break;

		case '1':
			printf("# - Cod. do Servico: ");
			break;

		default:
			printf("\n### - ! Nao ha ou nao eh permitido essa opcao. ! ###\n");
			break;
		}

	} while (pickServ!='0');

	return;
}

void telaExibe_serv(void)
{
	printf("//                                                           \n");
	printf("//    Tipo: Corte                                            \n");
	printf("//    Duracao: 30 min                                        \n");
	printf("//    Codigo: C02                                            \n");
	printf("//                                                           \n");
	printf("//    Tipo: Tingir                                           \n");
	printf("//    Duracao: 60 min                                        \n");
	printf("//    Codigo: T04                                            \n");
	printf("//                                                           \n");
	printf("/////////////////////////////////////////////////////////////\n");
}