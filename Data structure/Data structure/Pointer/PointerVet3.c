#include<stdio.h>

void verificaPares();

int main(){

    int x, y;

    printf("Informe o valor de x e y: \n");
    scanf("%d %d", &x, &y);

    verificaPares(&x, &y);
    printf("Valor de x: %d\n", x);
    printf("Valor de y: %d", y);

    return 0;
}



void verificaPares(int *pX, int *pY){
    
    if (*pX % 2 == 0)
    {
        *pX += 5;
    }else{
        *pX += 1;
    }
    
    if (*pY % 2 == 0)
    {
        *pY += 5;
    }else{
        *pY += 1;
    }
    
}