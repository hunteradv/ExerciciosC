#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b,c;

    printf("\n Digite um numero inteiro: ");
    scanf("%d", &a);

    printf("\n Digite outro numero inteiro: ");
    scanf("%d", &b);

    printf("\n Digite mais numero inteiro: ");
    scanf("%d", &c);

    printf("\n Ordem digitada: %d %d %d ", a, b, c);
    printf("\n Ordem invertida: %d %d %d \n", c, b, a);

    system("pause");

    return 0;
}