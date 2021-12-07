#define num 10
void listaArray();
void insereElem();
void acessaElem();
void alteraElem();
void removeElem();
void listaArray();

int vet[num], last = -1, valor, cont = 0;

void insereElem(int i)
{
    if (cont == 0)
    {
        printf("\nInforme o primeiro valor: ");
        scanf("%d", &valor);
        fflush(stdin);
        vet[0] = valor;
        cont++;
        last++;
    }
    else if ((i < 0) || i > (last + 1))
    {
        printf("\nPosicao invalida!!\n");
    }
    else if ((i == (last + 1)))
    {
        printf("Informe o valor a ser inserido: ");
        scanf("%d", &valor);
        fflush(stdin);
        vet[last + 1] = valor;
        last++;
    }
    else
    {
        printf("\nInforme o valor: ");
        scanf("%d", &valor);
        fflush(stdin);

        for (int j = last; j >= i; j--)
        {
            vet[j + 1] = vet[j];
        }

        vet[i] = valor;
        last++;
    }

    listaArray();
    printf("\nUlt: %d\n", last);
}

void acessaElem(int i)
{
    if ((i >= 0) && (i < last + 1) && cont > 0)
    {
        printf("\nArray %d: %d", i, vet[i]);
    }
    else
    {
        printf("\nElemento invalido!");
    }
}

void alteraElem(int i)
{
    if (cont == 0)
    {
        printf("\nNenhum item na lista!");
    }
    else
    {
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
    listaArray();
}

void removeElem(int i){
    if(cont == 0){
        printf("\nNenhum elemento na lista para remover");
    
    } else if((i >= 0) && i <= last){
        for (int j = i; j <= (last); j++)
        {
            vet[j] = vet[j+1];
            last--;
        }
    }
    listaArray();
}

void listaArray()
{
    if (cont == 0)
    {
        printf("\nLista vazia");
    }
    else
    {
        for (int j = 0; j <= last; j++)
        {
            printf("\nArray %d: %d", j, vet[j]);
        }
    }

    printf("\n");
}
