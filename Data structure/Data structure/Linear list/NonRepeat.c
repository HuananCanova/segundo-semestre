#include<stdio.h>


int main(){

    int vet[] = {1,1,2,3,3,4};
    int j;
    
    for (int i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (vet[i] == vet[j] && i!= j)
            {
                break;
            }
        }

        if (j == 6)
        {
            printf("Vetor[%d]: %d\n", i, vet[i]);
        }
        
        
        
    }
    

    return 0;
}