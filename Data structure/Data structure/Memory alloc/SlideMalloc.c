#include<stdlib.h>
#include<stdio.h>

void insereElemento();

int main(){

    int *vet = NULL, n;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    vet = (int*)malloc(n * sizeof(int));

    insereElemento(vet, n);

    free(vet);
    return 0;
}



void insereElemento(int *v, int n){
    
    if (v != NULL)
    {
        printf("\nInforme os elementos do vetor: \n");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", (v + i));
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", *(v + i));
        }
    }else{
        printf("\n Memoria insufieciente\n");
    }
    
    
    
}