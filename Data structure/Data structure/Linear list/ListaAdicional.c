#include <stdio.h>
#include "ListaAdicionalBib.h"

int main()
{

    int op, n = 0;

    do
    {

        printf("\n");
        printf("Selecione uma opcao: ");
        printf("\n1 - Inserir funcionario ");
        printf("\n2 - localizar funcionario ");
        printf("\n3 - Demitir funcionario ");
        printf("\n4 - Listar funcionarios com salario entre (2500 - 6800)");
        printf("\n0 - Encerrar programa.\n");
        scanf("%d", &op);

        switch (op)
        {
        case 0:
            break;
        case 1:
            n = insereFuncionario(n);
            break;
        case 2:
            if (n == 0)
            {
                printf("Nenhum funcionario cadastrado!\n");
            }
            else
            {
                int matricula;
                printf("Informe a matricula para pesquisar: ");
                scanf("%d", &matricula);
                fflush(stdin);

                localizaFuncionario(n, matricula);
            }
                break;
            case 3:
                if (n == 0)
                {
                    printf("Nenhum funcionario cadastrado!\n");
                }else{
                    int matricula;
                    printf("Informe a matricula para demitir: \n");
                    scanf("%d", &matricula);

                    n = demiteFuncionario(n, matricula);
                }
                break;
            case 4:
            if (n == 0)
            {
                printf("\nNenhum funcionario na lista!\n");
            }else{
                listaFuncionario(n);
            }
            
                break;
            default:
                printf("\nOpcao invalida!\n");
                break;
            }
        }
        while (op != 0);

        return 0;
    }
