#include <stdio.h>
#include "Exerc1slidebib.h"


int main()
{

    int op, i;
    do
    {
        printf("\nEscolha a funcao desejada\n");
        printf("1- Inserir um valor\n");
        printf("2- Acessar um valor\n");
        printf("3- Remover um elemento\n");
        printf("4- Alterar um elemento\n");
        printf("5- Mostrar lista\n");
        printf("6- Encerra programa\n");

        scanf("%d", &op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            printf("\nQual posicao deseja inserir (0-9): ");
            scanf("%d", &i);
            insereElem(i);
            break;
        case 2:
            // acessaElem();
            printf("\nQual posicao deseja acessar (0-9): ");
            scanf("%d", &i);
            acessaElem(i);
            break;
        case 3:
            // removeElem();
            printf("\nQual posicao deseja remover (0-9): ");
            scanf("%d", &i);
            removeElem(i);
            break;
        case 4:
            // alteraElem();
            printf("\nQual posicao deseja alterar (0-9): ");
            scanf("%d", &i);
            alteraElem(i);
            break;
        case 5:
            // listaArray();
            listaArray();
            break;

        default:
            printf("\nOpcao invalida!");
            break;
        }

    } while (op != 6);

    return 0;
}