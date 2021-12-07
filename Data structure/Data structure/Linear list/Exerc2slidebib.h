#define tam 50

char vetX[tam], vetY[tam], vetConca[(tam+tam)], opLista;
int lastX = 0, lastY = 0, vez = 0;

void listaArray();
void insereElem();
void concatenaLista();
void intercalaElem();
void divideLista();
void copiaLista();
void ordenaLista();
void pesquisaElem();


void insereElem()
{

    printf("\nEm qual lista gostaria de inserir? (x ou y) ");
    scanf("%c", &opLista);
    if (opLista == 'x')
    {
        vetX[lastX] = 'x';
        lastX++;
        vez++;
    }
    else if (opLista == 'y')
    {
        vetY[lastY] = 'y';
        lastY++;
        vez++;
    }
    else
    {
        printf("\nOpcao de lista invalida!!!");
    }

    listaArray();
}


void concatenaLista()
{
    int i = 0;
    if ((lastX >= 1 && lastY >= 1))
    {

        for (int i = 0; i <= lastX; i++)
        {
            vetConca[i] = vetX[i];
        }

        for (int j = (lastX); j < vez; j++)
        {
            vetConca[j] = vetY[i];
            i++;
        }
        printf("\nListas Concatenadas");
        for (int i = 0; i < vez; i++)
        {
            printf("\n%c%d", vetConca[i], i);
        }
    }
    
       
}

void intercalaElem(){
    int j = 0, i = 0;

    do
    {
        if (i < lastX)
        {
            vetConca[j] = vetX[i];
            j++;
        }

        if (i < lastY)
        {
            vetConca[j] = vetY[i];
            j++;
        }
        i++;
    } while (i < lastX || i< lastY);
    printf("\nVetor: ");

    printf(vetConca);
    
}

void divideLista(){
    printf("Qual lista deseja dividir? (x ou y)");
    scanf("%c", &opLista);

    if (opLista == 'x')
    {
        int nlastX = (int)floor(lastX/2);
        round(nlastX);


        printf("\nLista 1: ");
        for (int i = 0; i < nlastX; i++)
        {
            printf("\n%c%d", vetX[i], i);
        }
        printf("\n\n");
        printf("\nLista 2: ");
        for (int i = (nlastX); i < lastX; i++)
        {
            printf("\n%c%d", vetX[i], i);
        }
        
    } else if (opLista == 'y')
    {
        int nlastY = (int)floor(lastY/2);
        round(nlastY);

        printf("\nLista 1: ");
        for (int i = 0; i < nlastY; i++)
        {
            printf("\n%c%d", vetY[i], i);
        }
        printf("\n\n");
        printf("\nLista 2: ");
        for (int i = (nlastY); i < lastY; i++)
        {
            printf("\n%c%d", vetY[i], i);
        }
    }

}

void copiaLista(){
    printf("\nQual lista deseja copiar: (x ou y) ");
    scanf("%c", &opLista);
    fflush(stdin);
    if (opLista == 'x')
    {
        if (lastX < lastY)
        {
            printf("\nVETOR Y -");
            for (int i = 0; i < lastX; i++)
            {
                vetY[i] = vetX[i];
                printf(" %c%d", vetY[i], i);
            }
        }else{
            printf("\nPouco espaco na lista - X:%d > Y:%d",lastX, lastY);
        }
        
    }else if (opLista == 'y')
    {
        if (lastY < lastX)
        {
            printf("\nVETOR X -");
            for (int i = 0; i < lastY; i++)
            {
                vetX[i] = vetY[i];
                printf(" %c%d", vetX[i], i);
            }
        }else{
            printf("\nPouco espaco na lista -  Y:%d > X:%d",lastY, lastX);
        }
    }
}

void ordenaLista(){
    //ORDENAR LISTA
}

void pesquisaElem(){
    int num;
    printf("\nQual elemento gostaria de acessar? ");
    scanf("%d", &num);
    fflush(stdin);
    printf("\nDe qual lista? (x ou y) ");
    scanf("%c", &opLista);
    fflush(stdin);

    if (opLista == 'x')
    {
        if (num >= 0 && num <= lastX)
        {
            printf("\nVet: %c%d", vetX[num], num);
        }else{
            printf("\nPosicao nao encontrada!");
        }
        
    }else if (opLista == 'y')
    {
        if (num >= 0 && num <= lastX)
        {
            printf("\nVet: %c%d", vetY[num], num);
        }else{
            printf("\nPosicao nao encontrada!\n");
        }
    }else{
        printf("\nLista invalida!");
    }
    
    

}



void listaArray()
{
    if (vez == 0)
    {
        printf("\nLista vazia");
    }
    else
    {
        if (opLista == 'x')
        {
            for (int j = 0; j < lastX; j++)
            {
                printf("\nArray X %c%d", vetX[j], j);
            }
        }
        else if (opLista == 'y')
        {
            for (int j = 0; j < lastY; j++)
            {
                printf("\nArray Y %c%d", vetY[j], j);
            }
        }
    }

    printf("\n");
}