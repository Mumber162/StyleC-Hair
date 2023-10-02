#include <stdio.h>
#include <stdlib.h>
#include "funcionarios.h"
#include "util.h"

void menuFuncionarios(void)
{
	int opt=1;
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
	int res=5;
	while (res!=0)
	{
		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - ---  CADASTRAR Funcionarios --- -     ::\n");
		printf("::                                             ::\n");
		printf("::    CPF do Funcionario:                      ::\n");
		printf("::    Nome do Funcionario:                     ::\n");
		printf("::    Email do Funcionario:                    ::\n");
		printf("::    Num. Telefone:                           ::\n");
		printf("::    Cargo:                                   ::\n");
		printf("::    Codigo para ID:                          ::\n");
		printf("::                      _ _ _ _ _ _ _ _ _ _ _  ::\n");
		printf("::    1 - Prosseguir   |                       ::\n");
		printf("::    0 - (Voltar)     | Resp.: ");
		scanf("%d", &res);

		switch (res)
		{
		case 1:

			char cpf[11];
			char nome[20];
			char email[40];

			// lerCPF(cpf);
			do {
				printf("# - CPF do Funcionario   :");
				scanf("%c", cpf);
			} while (validaCPF(cpf));

			printf("# - Nome do Funcionario  :");
			printf("# - Email do Funcionario :");
			printf("# - Num. Telefone        :");
			printf("# - Cargo                :");
			printf("# - Codigo para ID       :");	

		break;

		default:
			printf("\n-- Nao ha ou nao eh permitido essa opcao. --\n");
			break;
		}
	
	}
	return;

}

void telaPesquisa_func(void)
{
	int res;
	do {

		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - ---  PESQUISAR Funcionarios --- -     ::\n");
		printf("::                                             ::\n");
		printf("::    Digite o Codigo ID:    \n");
		printf("::                           \n");
		printf("::    1 - Prosseguir         \n");
		printf("::    0 - (Voltar)           \n");

		scanf("%d", &res);
		
	} while (res!=0);
	
	return;
}

void telaAtualiza_func(void)
{
	printf("\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  ATUALIZAR Funcionarios --- - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo ID:    \n");
	printf("::                           \n");
	printf("::    1 - Prosseguir         \n");
	printf("::    0 - (Voltar)           \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaExclui_func(void)
{
	printf("\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  EXCLUIR Funcionarios --- - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo ID:    \n");
	printf("::                           \n");
	printf("::    1 - Prosseguir         \n");
	printf("::    0 - (Voltar)           \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaExibe_func(void)
{
	printf("//                                                           \n");
	printf("//    Fagundes - FG2523                                      \n");
	printf("//                                                           \n");
	printf("//    E-mail:   fagundes@ufrn.edu.br                         \n");
	printf("//    Telefone: 999275724                                    \n");
	printf("//    CPF:      52324899811                                  \n");
	printf("//    Cargo:    Barbeiro                                     \n");
	printf("//                                                           \n");
	printf("/////////////////////////////////////////////////////////////\n");
}