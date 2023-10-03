#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
#include "util.h"
#include "clientes.h"
#include "funcionarios.h"
#include "agendamentos.h"
#include "servicos.h"

// Variável de escolha global //
char pick;

void info()
{
	system("@cls||clear");
	printf("/////////////////////////////////////////////////////////////\n");
	printf("/       Universidade Federal do Rio Grande do Norte         /\n");
	printf("/           Centro de Ensino Superior do Serido             /\n");
	printf("/         Departamento de Computacao e Tecnologia           /\n");
	printf("/            Disciplina DCT1106 -- Programacao              /\n");
}

// PROGRAMA PRINCIPAL
int main()
{
	do {
		menuPrincipal();
		scanf("%1s", &pick); getchar();

		switch (pick)
		{
		case '1':
			menuClientes();
			break;
		case '2':
			menuAgendamentos();
			break;
		case '3':
			menuFuncionarios();
			break;
		case '4':
			menuServicos();
			break;
		case '5':
			relatorios();
			break;
		case '6':
			telaSobre();
			break;
		case '7':
			telaEquipe();
			break;
		case '0':
			printf("Ate a proxima! :)");
			break;
		default:
			printf("### Opcao invalida, tente novamente... ###\n");
			sleep(3);
			break;
		}
	} while (pick!='0');

	return 0;
}

//FUNÇÕES
void menuPrincipal(void)
{
	info();
	printf("/////////////////////////////////////////////////////////////\n");
	printf("//                                                         //\n");
	printf("//   ---------------------------------------------------   //\n");
	printf("//   = = = -     STYLE-C HAIR: Cabeleireiros     - = = =   //\n");
	printf("//   ---------------------------------------------------   //\n");
	printf("//       Developed by @Mumber162 - since Aug, 2023         //\n");
	printf("//                                                         //\n");
	printf("/////////////////////////////////////////////////////////////\n");
	printf("//                                                         //\n");
	printf("//    ===============  MENU PRINCIPAL ===============      //\n");
	printf("//                                                         //\n");
	printf("//     1. Modulo CLIENTES                                  //\n");
	printf("//     2. Modulo AGENDAMENTOS                              //\n");
	printf("//     3. Modulo FUNCIONARIOS                              //\n");
	printf("//     4. Modulo SERVICOS                                  //\n");
	printf("//     5. Modulo RELATORIOS                                //\n");
	printf("//     6. SOBRE                                            //\n");
	printf("//     7. Time                                             //\n");
	printf("//     0 - (SAIR do Programa)                              //\n");
	printf("//                                                         //\n");
	printf("/////////////////////////////////////////////////////////////\n");
	printf("//                                                         //\n");
	printf("//     Digite a escolha desejada: ");
	
}

void telaSobre(void)
{
	info();
	printf("/////////////////////////////////////////////////////////////\n");
	printf("//                                                         //\n");
	printf("//       ===============    SOBRE   ===============        //\n");
	printf("//                                                         //\n");
	printf("//  O StyleC Hair e um programa para um salao de cabelei-  //\n");
	printf("//  reiro que visa simplificar a gestao de agendamentos,   //\n");
	printf("//  horarios e servicos. Atraves de uma interface intui-   //\n");
	printf("//  tiva, os funcionarios podem registrar agendamentos,    //\n");
	printf("//  controlar horarios disponiveis, e acompanhar servicos. //\n");
	printf("//  Isso otimiza as operacoes do salao, permitindo uma     //\n");
	printf("//  maior dedicacao aos clientes e servicos de qualidade.  //\n");
	printf("//                                                         //\n");
	printf("/////////////////////////////////////////////////////////////\n");
	printf("\n\t>>> Tecle <ENTER> para continuar...\n");
	getchar(); getchar();
}

void telaEquipe(void)
{
	info();
	printf("/////////////////////////////////////////////////////////////\n");
	printf("//                                                         //\n");
	printf("//       ===============    TIME   ===============         //\n");
	printf("//                                                         //\n");
	printf("//    O StyleC Hair foi desenvolvido por:                  //\n");
	printf("//                                                         //\n");
	printf("//    Paulo de Tarso Medeiros Cavalcante                   //\n");
	printf("//    E-mail: paulo.medeiros.703@ufrn.edu.br               //\n");
	printf("//    Redes Sociais: @paulo_detars                         //\n");
	printf("//    Git: https://github.com/Mumber162/StyleC-Hair.git    //\n");
	printf("//                                                         //\n");
	printf("/////////////////////////////////////////////////////////////\n");
	printf("\n\t>>> Tecle <ENTER> para continuar...\n");
	getchar(); getchar();
}

void relatorios(void)
{
	info();
	printf("/////////////////////////////////////////////////////////////\n");
	printf("//                                                         //\n");
	printf("//       ============    RELATORIOS   ============         //\n");
	printf("//                                                         //\n");
	printf("//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _//\n");
	printf("//                                                         //\n");
	printf("//                        CLIENTES                         //\n");
	printf("//                                                         //\n");
	printf("//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- //\n");
	telaExibe_cliente();

	printf("\n\t>>> Tecle <ENTER> para continuar...\n");
	getchar(); getchar();

	printf("//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _//\n");
	printf("//                                                         //\n");
	printf("//                      AGENDAMENTOS                       //\n");
	printf("//                                                         //\n");
	printf("//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- //\n");
	telaExibe_agend();

	printf("\n\t>>> Tecle <ENTER> para continuar...\n");
	getchar(); getchar();

	printf("//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _//\n");
	printf("//                                                         //\n");
	printf("//                      FUNCIONARIOS                       //\n");
	printf("//                                                         //\n");
	printf("//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- //\n");
	telaExibe_func();

	printf("\n\t>>> Tecle <ENTER> para continuar...\n");
	getchar(); getchar();

	printf("//_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _//\n");
	printf("//                                                         //\n");
	printf("//                        SERVICOS                         //\n");
	printf("//                                                         //\n");
	printf("//-- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- //\n");
	telaExibe_serv();

	printf("\n\t>>> Tecle <ENTER> para continuar...\n");
	getchar(); getchar();
}

//== # == # ===============================================