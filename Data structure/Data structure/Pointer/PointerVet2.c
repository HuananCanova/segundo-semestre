#include<stdio.h>

void scanVetor();
void localizaMaior();
void localizaMenor();
void localizaPares();

int main(){

    int vet[5], *pVet;
    pVet = vet;

    scanVetor(pVet);
    localizaMaior(pVet);
    localizaMenor(pVet);
    localizaPares(pVet);

    return 0;
}

void scanVetor(int *p){

    printf("Informe cinco valores para o vetor: \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (p+i));
    }
}

void localizaMaior(int *p){
    int maior = *p;

    for (int i = 0; i < 5; i++)
    {
        if (*(p+i) >= maior)
        {
            maior = *(p+i);
        }
        
    }
    printf("\nMaior: %d", maior);
    printf("\n");
}

void localizaMenor(int *p){
    int menor = *p;

    for (int i = 1; i < 5; i++)
    {
        if (*(p+i) <= menor)
        {
            menor = *(p+i);
        }
        
    }
    printf("\nMenor: %d", menor);
    printf("\n");
}

void localizaPares(int *p){
    printf("Pares: ");
    for (int i = 1; i < 5; i++)
    {
        if (*(p+i)%2==0)
        {
            printf("%d ", *(p+i));
        }
    }
}