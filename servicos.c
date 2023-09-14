#include <stdio.h>
#include <stdlib.h>
#include "servicos.h"

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
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  CADASTRAR SERVICOS --- - - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Tipo de Servico:      \n");
	printf("::    Codigo do Servico:    \n");
	printf("::                          \n");
	printf("::    0 - (Voltar)          \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaPesquisa_serv(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  PESQUISAR SERVICOS --- - - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Codigo do Servico:    \n");
	printf("::                          \n");
	printf("::    0 - (Voltar)          \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaAtualiza_serv(void)
{
	printf("\n\n\n");
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
	printf("\n\n\n");
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