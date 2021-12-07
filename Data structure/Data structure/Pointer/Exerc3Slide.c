#include <stdio.h>

int main()
{

    int num, *p;


    printf("Informe um valor inteiro: ");
    scanf("%d", &num);

    p = &num;

    
    for (int i = 0; i < 20; i++)
    {
        printf("\nValor de p(end): %d", p);
        printf("\nConteudo do endereco p1: %d", *p);
        printf("\n");
        p++;
    }
    

    return 0;
}