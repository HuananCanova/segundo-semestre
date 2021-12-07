#include <stdio.h>
#define tam 10

int main()
{
    int vet[tam], num, last, i;

    do
    {
        printf("Quantos elementos deseja inserir na lista (1-10)? ");
        scanf("%d", &num);
        fflush(stdin);
    } while (num > 10 || num <= 0);

    for (i = 0; i < num; i++)
    {
        printf("Informe o valor da posicao %d: ", i);
        scanf("%d", &vet[i]);
    }

    // printf("\n\n%d", i);

    if (num != 0)
    {
        last = num - 1;
    }
    else
    {
        last = num;
    }
    printf("\nUlt: %d\n", last);

    int op, valor;
    do
    {
        printf("\nEscolha a funcao desejada\n");
        printf("1- Inserir um valor\n");
        printf("2- Acessar um valor\n");
        printf("3- Remover um elemento\n");
        printf("4- Alterar um elemento\n");
        printf("5- Mostrar lista\n");

        scanf("%d", &op);
        fflush(stdin);

        switch (op)
        {
        case 1:
            // INSERIR UM VALOR
            printf("Informe em qual posicao deseja inserir o novo elemento: ");
            scanf("%d", &i);
            fflush(stdin);

            if ((i < 0) || (i > (last + 1)))
            {
                printf("\nPosicao invalida(DEVE SER CONTIGUO AS DEMAIS POSICOES)!\n");
            }
            else if ((i == (last + 1)))
            {
                printf("Informe o valor a ser inserido: ");
                scanf("%d", &valor);
                fflush(stdin);
                vet[last + 1] = valor;
                last++;
                printf("\nUlt: %d\n", last);
            }
            else
            {
                printf("Informe o valor a ser inserido: ");
                scanf("%d", &valor);
                fflush(stdin);

                for (int j = last; j >= i; j--)
                {
                    vet[j + 1] = vet[j];
                }
                vet[i] = valor;
                last++;
            }

            break;
        case 2:
            // ACESSAR UM VALOR
            printf("\nQual posicao deseja acessar? ");
            scanf("%d", &i);
            fflush(stdin);
            if ((i < 0) || i > last)
            {
                printf("\nPosicao invalida!\n");
            }
            else
            {
                printf("\nArray %d: %d", i, valor);
            }
            break;
        case 3:
            // REMOVER UM VALOR
            if (i < 0 || i > last)
            {
                printf("\nPosicao invalida!\n");
            }
            else
            {
                for (int j = i; j < last; j++)
                {
                    vet[j] = vet[j + 1];
                }
                last--;
            }
            break;
        case 4:
            // ALTERAR UM VALOR
            if (num < 0)
            {
                printf("\nNenhum item na lista!");
            }
            else
            {
                printf("\nQual posicao deseja alterar? ");
                scanf("%d", &i);
                fflush(stdin);
                if ((i >= 0 && i <= last))
                {
                    printf("\nValor: ");
                    scanf("%d", &valor);
                    fflush(stdin);
                    vet[i] = valor;
                }
                else
                {
                    printf("\nPosicao invalida (ultima posicao %d)", last);
                }
            }

            break;
        case 5:
            // SHOW ARRAY
            for (int i = 0; i <= last; i++)
            {
                printf("\nArray %d: %d", i, vet[i]);
            }

            break;

        default:
            printf("Opcao invalida!");
            break;
        }

    } while (op != 6);

    return 0;
}

// int insereElemento(int i){
//     printf("TESTEEEEE");
// }