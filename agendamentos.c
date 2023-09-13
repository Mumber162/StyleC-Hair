#include <stdio.h>

void menuAgendamentos(void)
{
	printf("\n");
	printf("/////////////////////////////////////////////////////////////\n");
	printf("//                                                         //\n");
	printf("//     =============  MENU AGENDAMENTOS =============      //\n");
	printf("//                                                         //\n");
	printf("//     1. CADASTRAR Agendamento                            //\n");
	printf("//     2. PESQUISAR Agendamento                            //\n");
	printf("//     3. PESQUISAR Agendamento                            //\n");
	printf("//     4. EXCLUIR   Agendamento                            //\n");
	printf("//     0 - (Voltar)                                        //\n");
	printf("//                                                         //\n");
	printf("/////////////////////////////////////////////////////////////\n");
	printf("//                                                         //\n");
	printf("//     Digite a escolha desejada: ");
	
    //printf("\t\t>>> Tecle <ENTER> para continuar...\n");
}

// OPÇÕES -======
void telaCadastro_agend(void)
{
	printf("\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  CADASTRAR AGENDAMENTO --- - - -     ::\n");
	printf("::                                                   ::\n");
	printf("::    Data (dd/mm/aaaa):      \n");
	printf("::    Hora (--h--):           \n");
	printf("::    Preco (xx,xx):          \n");
	printf("::    Servico (f.key):        \n");
	printf("::    Codigo do Agendamento:  \n");

}

void telaPequisa_agend(void)
{
	printf("\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  PESQUISAR AGENDAMENTO --- - - -     ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo do Agend.:    \n");

}

void telaAtualiza_agend(void)
{
	printf("\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  ATUALIZAR AGENDAMENTO --- - - -     ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo do Agend.:    \n");

}

void telaExclui_agend(void)
{
	printf("\n");
    printf("::===================================================::\n");
	printf("::                                                   ::\n");
	printf("::    - - - ---  EXCLUIR AGENDAMENTO --- - - - -     ::\n");
	printf("::                                                   ::\n");
	printf("::    Digite o Codigo do Agend.:    \n");

}