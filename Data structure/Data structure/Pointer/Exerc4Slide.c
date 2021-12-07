#include <stdio.h>

int main()
{

    int a = 11, b = 5, *p1, *p2;

    p1 = &a;
    p2 = &b;

    if (p1 > p2)
    {
        printf("P1 esta mais adiante: %x", p1);
        printf("\nP2: %x", p2);
    }else{
        printf("P2 esta mais adiante: %x", p2);
    }
    

    return 0;
}