#include <stdio.h>

int main()
{

    int num = 0;
    int *pNum;

    pNum = &num;

    printf("conteudo de num: %d \n", num);
    printf("conteudo de num: %x \n", &num);
    printf("conteudo de num: %x \n", pNum);
    printf("conteudo de num: %x \n", *pNum);
    *pNum = 1;

    printf("conteudo de num: %x \n", *pNum);


    return 0;
}