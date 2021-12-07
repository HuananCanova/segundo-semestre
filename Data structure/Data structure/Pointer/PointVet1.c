#include<stdio.h>


int main(){

    int vet[5], aux;


    for (int i = 0; i < 5; i++)
    {
        printf("%d Informe um valor: \n", i);
        scanf("%d", (vet + i));
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d", *(vet+i));
    }
    


    return 0;
}