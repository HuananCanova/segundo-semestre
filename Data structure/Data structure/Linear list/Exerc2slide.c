#include<stdio.h>
#include <math.h>
#include "Exerc2slidebib.h"

int main(){


    int opMenu;
    char oplista;
    do
    {
        printf("\nEscolha a funcao desejada\n");
        printf("1- Inserir elemento\n");
        printf("2- Concatenar duas listas\n");
        printf("3- Intercalar elementos\n");
        printf("4- Dividir uma lista em duas\n");
        printf("5- Copiar uma lista para outra\n");
        printf("6- Ordenar ordem crescente/decrescente\n");
        printf("7- Pesquisar elementos nas listas\n");
        printf("0- Encerrar programa\n");

        scanf("%d", &opMenu);
        fflush(stdin);

        switch (opMenu)
        {
        case 1:
            //INSERIR ELEMENTOS
            insereElem();
            break;
        
        case 2:
            /* code */
            concatenaLista();
            break;
        
        case 3:
            /* code */
            intercalaElem();
            break;
        
        case 4:
            /* code */
            divideLista();
            break;
        
        case 5:
            /* code */
            copiaLista();
            break;
        
        // case 6:
        //     /* code */
        //     ordenaLista();
        //     break;
        
        case 7:
            /* code */
            pesquisaElem();
            break;
        default:
            printf("\nOpcao de menu invalida!!!");
            break;
        }

    } while (opMenu!=0);
    



    return 0;
}