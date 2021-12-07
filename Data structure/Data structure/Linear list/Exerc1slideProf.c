#include<stdio.h>

void imprime (int v[10], int f)
{
    int i;
    printf("\n");
    for (i=0; i<f; i++)
    {
        printf("%d ", v[i]);
    }
}

int insere (int v[10], int f) // insere um novo elemento no in�cio, meio ou final da lista
{
    char op = 's';
    while (op == 's' && f < 10)
    {
        
        int pos = 0, valor;
        printf ("Digite o valor: ");
        scanf ("%d", &valor);
    
        if (f != 0) // verifica se a lista est� vazia
        {
            printf("Digite uma posicao para inserir: ");
            scanf("%d", &pos);
        }
        else // insere no in�cio da lista
        {
            printf("Lista vazia. \n");
            v[f] = valor;
        }
    
        if (f <= pos) // verifica se a posi��o � posterior a �ltima. Insere no final da lista
        {
            printf("Sera inserido na ultima posicao.\n ");
            v[f] = valor;
        }
    
        else // insere entre outros elementos e reorganiza a lista
        {
            int aux = f;
            while (aux > pos)
            {
                v[aux] = v[aux-1];
                aux--;
            }
            v[pos] = valor;
        }
        f++;
        
        printf("\nIncluir novo valor (s/n): ");
        fflush(stdin);
        scanf("%c", &op);
    }
    
    system("cls");
    if (f == 10)
    {
    	printf("Lista completa. Nao existem posicoes livres. \n");
	}
    imprime(v, f);
    return f;
}

void acessa (int v[10], int f)
{
    int pos;
    imprime(v, f);
    printf("\nEscolha uma posicao para acessar: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= f)
    {
        system("cls");
        printf("Posicao fora da lista. \n");
    }
    else
    {
        printf("Elemento armazenado na posicao %d e': %d", pos, v[pos]);
    }
}

void altera (int v[10], int f)
{
    int pos;
    imprime(v, f);
    printf("\nEscolha uma posicao para alterar seu valor: ");
    scanf("%d", &pos);
    if (pos < 0 || pos >= f)
    {
        system("cls");
        printf("Posicao fora da lista. \n");
    }
    else
    {
        int valor;
        printf("Digite o novo valor: ");
        scanf("%d", &valor);
        v[pos] = valor;
    }
    imprime(v, f);
}

int retira (int v[10], int f)
{
    char op = 's';
    
    while (op == 's' && f > 0)
    {
    
        if (f == 0)
        {
            printf("Lista vazia. \n");
        }
    
        else
        {
            int pos;
            printf ("\nDigite uma posicao para retirar seu elemento: ");
            scanf("%d", &pos);
            if (pos < 0 || pos >= f)
            {
                system("cls");
                printf("Posicao fora da lista. \n");
            }
            else
            {
                if (pos == f - 1)
                {
                    f--;
                }
                else if (pos < f - 1)
                {
                    int aux = pos;
                    while (aux < f-1)
                    {
                        v[aux] = v[aux+1];
                        aux++;
                    }
                    f--;
                }
            }
        }
        imprime(v, f);
        printf("\nRetirar outro valor (s/n): ");
        fflush(stdin);
        scanf("%c", &op);
    }
    system("cls");
    return f;
}

int main()
{
    int v[10];
    int fim = 0;
    int i, pos;
    int menu = 0;

    while (menu != 5)
    {
        printf("\n \n");
        printf("1. Inserir elemento\n");
        printf("2. Retirar elemento \n");
        printf("3. Acessar posicao \n");
        printf("4. Alterar elemento\n");
        printf("5. Sair \n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &menu);
        switch(menu)
        {
            case 1:
                    fim = insere(v, fim);
                    break;
            case 2:
                    fim = retira(v, fim);     
                    break;
            case 3:
                    acessa(v, fim);     
                    break;
            case 4:
                    altera(v, fim);     
                    break;
        }
    }    
    return 0;    
}
