#include <stdio.h>

int main()
{

    int nInt, *pI;
    float nFloat, *pF;
    
    nInt = 2;
    nFloat = 2.7;

    pI = &nInt;
    pF = &nFloat;

    printf("---------INT / FLOAT---------\n");
    printf("Valor das variaveis: %d %.2f\n", nInt, nFloat);
    printf("Endereco de memoria das variaveis: %x %x\n", &nInt, &nFloat);
    printf("Valores dos ponteiros: %d %.2f\n", *pI, *pF);
    printf("Endereco dos ponteiros: %x %x\n", pI, pF);
    printf("Endereco dos ponteiros: %p %p\n", pI, pF);

    return 0;
}