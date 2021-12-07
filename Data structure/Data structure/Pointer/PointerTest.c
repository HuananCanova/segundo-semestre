#include<stdio.h>


int main(){

    int x = 5, *px;
    

    px = &x;

    printf("%d", *px);
    return 0;
}