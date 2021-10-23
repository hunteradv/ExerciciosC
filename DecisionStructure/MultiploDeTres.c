#include<stdio.h>
#include<stdlib.h>

int main(){

    int num, resto;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &num);

    resto = num % 3; //% é o operador MOD

    if(resto == 0){
        printf("\n %d e multiplo de 3", num);
    }

    printf("\nPrescisamos de chuva urgentemente\n\n");

    return 0;
}