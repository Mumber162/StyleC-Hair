#include <stdio.h>
#include "clientes.h"

void menuClientes(void)
{
	int opt;
	printf("\n");
	printf("/////////////////////////////////////////////////////////////\n");
	printf("//                                                         //\n");
	printf("//     ===============  MENU CLIENTES ===============      //\n");
	printf("//                                                         //\n");
	printf("//     1. CADASTRAR Clientes                               //\n");
	printf("//     2. PESQUISAR Clientes                               //\n");
	printf("//     3. PESQUISAR Clientes                               //\n");
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
	case 0:
		return;
	
	default:
		printf("Opcao invalida, tente novamente...");
		break;
	}
}

// OPÇÕES -======
void telaCadastro_cliente(void)
{
	printf("\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  CADASTRAR CLIENTES --- - - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    CPF do Cliente:     \n");
	printf("::    Nome do Cliente:    \n");
	printf("::    Num. Telefone:      \n");
	printf("::    Tipo de Cabelo:     \n");

}

void telaPequisa_cliente(void)
{
	printf("\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  PESQUISAR CLIENTES --- - - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o CPF:    \n");

}

void telaAtualiza_cliente(void)
{
	printf("\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  ATUALIZAR CLIENTES --- - - - -    ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o CPF:    \n");

}

void telaExclui_cliente(void)
{
	printf("\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - - ---  EXCLUIR CLIENTES --- - - - -      ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o CPF:    \n");

}