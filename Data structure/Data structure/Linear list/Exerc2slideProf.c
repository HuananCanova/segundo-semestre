#include<stdio.h>

/*
copiar lista falta imprimir
dividir lista n�o funciona
*/

void imprime (int v[10], int f)
{
    int i;
    printf("\n");
    for (i=0; i<f; i++)
    {
        printf("%d ", v[i]);
    }
    printf("\n");
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

int concatena(int v[10], int f, int v2[10], int f2)
{
    int total;
    total = f + f2;
    int vconcatena[total];// neste caso o vetor de concatena��o ter� tamanho suficiente somente para guardar os elementos existentes nas duas listas
    int i, j=0;
    for(i=0;i<f; i++) //insere os elementos de v em vconcatena
    {
        vconcatena[i] = v[i];
    }

    while(i<total) //insere os elementos de v2 em vconcatena
    {
        vconcatena[i] = v2[j];
        i++;
        j++;
    }
    imprime(v, f);
    imprime(v2, f2);
    imprime(vconcatena, total);
    return total;
}

void divide(int v[10], int f)
{
    int metade = f/2;
    int fim1 = 0; // vari�vel para controlar o tamanho da lista com a primeira metade
    int fim2 = 0; // vari�vel para controlar o tamanho da lista com a segunda metade
    int i, j=0;

    if (f % 2 == 0)// verifica se o total de elementos existentes � par ou �mpar
    {
        int v1[metade], v2[metade];
        for(i=0; i<metade; i++)
        {
            v1[i] = v[i];
            fim1++;
        }

        while (i<f)
        {
            v2[j] = v[i];
            j++;
            fim2++;
            i++;
        }
        system("cls");
        printf("Lista inteira: ");
        imprime(v, f);
        printf("Metade 1: ");
        imprime(v1, fim1);
        printf("Metade 2: ");
        imprime(v2, fim2);
    }

    else
    {
        int v1[metade+1], v2[metade];

        for(i=0; i<=metade; i++)
        {
            v1[i] = v[i];
            fim1++;
        }

        while (i<f)
        {
            v2[j] = v[i];
            j++;
            fim2++;
            i++;
        }
        system("cls");
        printf("Lista inteira: ");
        imprime(v, f);
        printf("Metade 1: ");
        imprime(v1, fim1);
        printf("Metade 2: ");
        imprime(v2, fim2);
    }
}

void intercala (int v[10], int f, int v2[10], int f2)
{
    int i = 0, j = 0;
    int total;
    total = f + f2;
    int vintercala[total];
     do
    {
		if(i < f)
		{
			vintercala[j] = v[i];
			j++;
		}

		if(i < f2)
		{
			vintercala[j] = v2[i];
			j++;
		}
		i++;
	} while(i <= f || i <= f2);
	imprime(vintercala, total);
}

void Pesquisa (int v[10], int f, int v2[10], int f2)
{
    int op, pos, valor, i,  c = 0;
    printf("Deseja pesquisar por: \n");
    printf("1. Posicao \n");
    printf("2. Valor \n");
    scanf("%d", &op);
    if (op == 1)
    {
        printf("digite a posicao de procura: ");
        scanf("%d", &pos);
        system("cls");
        if (pos < f)
        {
            printf("vetor 1: %d \n", v[pos]);
        }
        else
        {
            printf("Posicao fora da lista 1. \n");
        }
        if (pos < f2)
        {
            printf("vetor 2: %d \n", v2[pos]);
        }
        else
        {
            printf("Posicao fora da lista 2. \n");
        }
    }
    if (op == 2)
    {
        printf("digite um valor para pesquisa: ");
        scanf("%d", &valor);
        system("cls");
        for(i=0; i<f; i++)
        {
            if(v[i] == valor)
            {
                printf("O valor aparece na posicao %d da lista 1\n", i);
                c++;
            }
        }
        if (c == 0)
        {
            printf("Valor nao aparece na lista 1. \n");
        }

        i = 0;
        c = 0;

        for(i=0; i<f2; i++)
        {
            if(v2[i] == valor)
            {
                printf("O valor aparece na posicao %d da lista 2\n", i);
                c++;
            }
        }
        if (c == 0)
        {
            printf("Valor nao aparece na lista 2. \n");
        }
    }
}

void copia (int v[10], int f, int v2[10], int f2)
{
    int l, i;
    printf("1. Lista 1 para lista 2. \n");
    printf("2. Lista 2 para lista 1. \n");
    scanf("%d", &l);
    if(l == 1)
    {
        for (i=0; i<f; i++)
        {
            v2[i] = v[i];
        }
        f2 = f;
    }
    else
    {
        for (i=0; i<f2; i++)
        {
            v[i] = v2[i];
        }
        f = f2;
    }
    system("cls");
    printf("lista 1: ");
    imprime(v, f);
    printf("lista 2: ");
    imprime(v2, f2);
}

int main()
{
    int v[10];
    int v2[10];
    int fim = 0, fim2 = 0, fim3 = 0;
    int i, pos, l;
    int menu = 0;

    while (menu != 8)
    {
        printf("\n \n");
        printf("1. Inserir elemento\n");
        printf("2. Concatenar listas \n");
        printf("3. Intercalar elementos \n");
        printf("4. Dividir lista\n");
        printf("5. Copiar lista \n");
        printf("6. Pesquisar elementos \n");
        printf("7. Imprimir listas \n");
        printf("8. Sair \n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &menu);
        switch(menu)
        {
            case 1:
                    printf("Em qual lista deseja inserir (1 ou 2)? \n");
                    scanf("%d", &l);
                    if(l == 1)
                    {
                        fim = insere(v, fim);
                    }
                    else {
                        fim2 = insere(v2, fim2);
                    }
                    break;
            case 2:
                    fim3 = concatena(v, fim, v2, fim2);
                    break;
            case 3:
                    intercala(v, fim, v2, fim2);
                    break;
            case 4:
                    printf("Qual lista deseja dividir (1 ou 2)? \n");
                    scanf("%d", &l);
                    if(l == 1)
                    {
                        divide(v, fim);
                    }
                    else {
                        divide(v2, fim2);
                    }
                    break;
            case 5:
                    copia(v, fim, v2, fim2);
                    break;
            case 6:
                    Pesquisa(v, fim, v2, fim2);
                    break;
            case 7: {
                    system("cls");
                    printf("Lista 1: ");
                    imprime(v, fim);
                    printf("\nLista 2: ");
                    imprime(v2, fim2);
                    break;
                }
        }
    }
    return 0;
}