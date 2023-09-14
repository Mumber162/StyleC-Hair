#include <stdio.h>
#include <stdlib.h>
#include "funcionarios.h"

void menuFuncionarios(void)
{
	int opt = 1;
	while (opt!=0)
	{
		system("@cls||clear");
		printf("/////////////////////////////////////////////////////////////\n");
		printf("//                                                         //\n");
		printf("//     =============  MENU Funcionarios =============      //\n");
		printf("//                                                         //\n");
		printf("//     1. CADASTRAR Funcionarios                           //\n");
		printf("//     2. PESQUISAR Funcionarios                           //\n");
		printf("//     3. ATUALIZAR Funcionarios                           //\n");
		printf("//     4. EXCLUIR   Funcionarios                           //\n");
		printf("//     0 - (Voltar)                                        //\n");
		printf("//                                                         //\n");
		printf("/////////////////////////////////////////////////////////////\n");
		printf("//                                                         //\n");
		printf("//     Digite a escolha desejada: ");
		scanf("%d", &opt);

		switch (opt)
		{
		case 1:
			telaCadastro_func();
			break;
		case 2:
			telaPesquisa_func();
			break;
		case 3:
			telaAtualiza_func();
			break;
		case 4:
			telaExclui_func();
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
void telaCadastro_func(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  CADASTRAR Funcionarios --- - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    CPF do Funcionario:     \n");
	printf("::    Nome do Funcionario:    \n");
	printf("::    Num. Telefone:          \n");
	printf("::    Cargo:                  \n");
	printf("::    Codigo para ID:         \n");
	printf("::                            \n");
	printf("::    0 - (Voltar)            \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaPesquisa_func(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  PESQUISAR Funcionarios --- - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo ID:    \n");
	printf("::                           \n");
	printf("::    0 - (Voltar)           \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaAtualiza_func(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  ATUALIZAR Funcionarios --- - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo ID:    \n");
	printf("::                           \n");
	printf("::    0 - (Voltar)           \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaExclui_func(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  EXCLUIR Funcionarios --- - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo ID:    \n");
	printf("::                           \n");
	printf("::    0 - (Voltar)           \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}