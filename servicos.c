#include <stdio.h>
#include <stdlib.h>
#include "servicos.h"
#include "util.h"

void menuServicos(void)
{
	int opt = 1;
	while (opt!=0)
	{
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
		scanf("%d", &opt);

		switch (opt)
		{
		case 1:
			telaCadastro_serv();
			break;
		case 2:
			telaPesquisa_serv();
			break;
		case 3:
			telaAtualiza_serv();
			break;
		case 4:
			telaExclui_serv();
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
void telaCadastro_serv(void)
{
	int res=5;
	while (res!=1) {

		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - - ---  CADASTRAR SERVICOS --- - -     ::\n");
		printf("::                                             ::\n");
		printf("::    Tipo de Servico:                         ::\n");
		printf("::    Duracao media de Servico (em min):       ::\n");
		printf("::    Codigo do Servico:                       ::\n");
		printf("::                                             ::\n");
		printf("::    0 - (Voltar)                             ::\n");
		scanf("%d", &res);

		switch (res)
		{
		case 1:

			char tipoServico[15];
			int duracaoServico;
			int codServico;

			printf("# - Tipo de Servico                   : ");
			printf("# - Duracao media de Servico (em min) : ");
			printf("# - Codigo do Servico                 : ");

			break;

		default:
			printf("\n-- Nao ha ou nao eh permitido essa opcao. --\n");
			break;
		}
	}
	return;
}

void telaPesquisa_serv(void)
{
	int res;
	do {
		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - - ---  PESQUISAR SERVICOS --- - -     ::\n");
		printf("::                                             ::\n");
		printf("::    Codigo do Servico:    \n");
		printf("::                          \n");
		printf("::    0 - (Voltar)          \n");
		
		scanf("%d", &res);
		if (res==0) { return; }
	} while (res!=0);

}

void telaAtualiza_serv(void)
{
	printf("\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  ATUALIZAR SERVICOS --- - - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Codigo do Servico:    \n");
	printf("::                          \n");
	printf("::    0 - (Voltar)          \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaExclui_serv(void)
{
	printf("\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  EXCLUIR SERVICOS --- - - - -      ::\n");
	printf("::                                                   ::\n");
	printf("::    Codigo do Servico:    \n");
	printf("::                          \n");
	printf("::    0 - (Voltar)          \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

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