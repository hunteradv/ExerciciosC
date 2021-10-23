#include<stdio.h>
#include<stdlib.h>

int main(){

    int numero1, numero2, numero3, soma, subtracao, multiplicacao;

    printf("\n Digite o primeiro numero: ");
    scanf("%d", &numero1);

    printf("\n Digite o segundo numero: ");
    scanf("%d", &numero2);

    printf("\n Digite o terceiro numero: ");
    scanf("%d", &numero3);

    soma = numero1 + numero2;
    subtracao = numero2 - numero3;
    multiplicacao = numero3 * numero1;

    printf("\n Soma de %d com %d: %d", numero1, numero2, soma);

    printf("\n Subtracao de %d por %d: %d", numero2, numero3, subtracao);

    printf("\n Multiplicacao de %d com %d: %d \n", numero3, numero1, multiplicacao);

    system("pause");
}