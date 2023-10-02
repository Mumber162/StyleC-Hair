#include <stdio.h>
#include <stdlib.h>
#include "agendamentos.h"
#include "util.h"

void menuAgendamentos(void)
{
	int opt = 1;
	while (opt!=0)
	{
		system("@cls||clear");
		printf("/////////////////////////////////////////////////////////////\n");
		printf("//                                                         //\n");
		printf("//     =============  MENU AGENDAMENTOS =============      //\n");
		printf("//                                                         //\n");
		printf("//     1. CADASTRAR Agendamento                            //\n");
		printf("//     2. PESQUISAR Agendamento                            //\n");
		printf("//     3. ATUALIZAR Agendamento                            //\n");
		printf("//     4. EXCLUIR   Agendamento                            //\n");
		printf("//     0 - (Voltar)                                        //\n");
		printf("//                                                         //\n");
		printf("/////////////////////////////////////////////////////////////\n");
		printf("//                                                         //\n");
		printf("//     Digite a escolha desejada: ");
		scanf("%d", &opt);

		switch (opt)
		{
		case 1:
			telaCadastro_agend();
			break;
		case 2:
			telaPesquisa_agend();
			break;
		case 3:
			telaAtualiza_agend();
			break;
		case 4:
			telaExclui_agend();
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
void telaCadastro_agend(void)
{
	int res=5;
	while (res!=0) {

		printf("\n\n");
		printf("::=============================================::\n");
		printf("::                                             ::\n");
		printf("::     - ---  CADASTRAR AGENDAMENTO --- -      ::\n");
		printf("::                                             ::\n");
		printf("::    Data (dd mm aaaa):                       ::\n");
		printf("::    Hora (--h--):                            ::\n");
		printf("::    Preco (RR.cc):                           ::\n");
		printf("::    Servico (foreign key):                   ::\n");
		printf("::    Cliente (foreign key):                   ::\n");
		printf("::    Funcionario do servico (foreign key):    ::\n");
		printf("::                                             ::\n");
		printf("::    Cod. do Agendamento:                     ::\n");
		printf("::                      _ _ _ _ _ _ _ _ _ _ _  ::\n");
		printf("::    1 - Prosseguir   |                       ::\n");
		printf("::    0 - (Voltar)     | Resp.: ");
		scanf("%d", &res);

		switch (res)
		{
			int dd, mm, aaaa;
			char hora;
			float preco;
			char telAgend[12];
			int codAgend;

			case 1:
				printf("# - Data (dd mm aaaa):                       ::\n");
				printf("# - Hora (--h--):                            ::\n");
				printf("# - Preco (RR.cc):                           ::\n");
				printf("# - Servico (foreign key):                   ::\n");
				printf("# - Cliente (foreign key):                   ::\n");
				printf("# - Funcionario do servico (foreign key):    ::\n");
				printf("# - Cod. do Agendamento:                     ::\n");
				break;

			default:

				break;
		}
	}

	return;
}

void telaPesquisa_agend(void)
{
	printf("\n\n");
    printf("::=============================================::\n");
	printf("::                                             ::\n");
	printf("::     - ---  PESQUISAR AGENDAMENTO --- -      ::\n");
	printf("::                                             ::\n");
	printf("::    Digite o Codigo do Agend.:    \n");
	printf("::                                  \n");
	printf("::    0 - (Voltar)                  \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaAtualiza_agend(void)
{
	printf("\n\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  ATUALIZAR AGENDAMENTO --- - - -     ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo do Agend.:    \n");
	printf("::                                  \n");
	printf("::    0 - (Voltar)                  \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaExclui_agend(void)
{
	printf("\n\n\n");
    printf("::==================================================::\n");
	printf("::                                                  ::\n");
	printf("::    - - - ---  EXCLUIR AGENDAMENTO --- - - - -    ::\n");
	printf("::                                                  ::\n");
	printf("::    Digite o Codigo do Agend.:    \n");
	printf("::                                  \n");
	printf("::    0 - (Voltar)                  \n");
	
	int back;
	scanf("%d", &back);
	if (back==0) { return; }

}

void telaExibe_agend(void)
{
	printf("//                                                           \n");
	printf("//    CLIENTE - Cliente Silveira da Clientela Gomes          \n");
	printf("//    SERVICO - Corte                                        \n");
	printf("//    DATA    - 12/12/2023                                   \n");
	printf("//    HORARIO - 18h30                                        \n");
	printf("//                                                           \n");
	printf("//    VALOR   - RS 25.00                                     \n");
	printf("//    CABELEIREIRO(a) - Fagundes                             \n");
	printf("//    CODIGO DO AGEND. - 0A13                                \n");
	printf("//                                                           \n");
	printf("/////////////////////////////////////////////////////////////\n");
}