#include <stdio.h>
#include <stdlib.h>
#include "funcionarios.h"

void menuFuncionarios(void)
{
	printf("\n");
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
	
    //printf("\t\t>>> Tecle <ENTER> para continuar...\n");
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

}

void telaPesquisa_func(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  PESQUISAR Funcionarios --- - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo ID:    \n");

}

void telaAtualiza_func(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  ATUALIZAR Funcionarios --- - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo ID:    \n");

}

void telaExclui_func(void)
{
	printf("\n\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  EXCLUIR Funcionarios --- - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo ID:    \n");

}