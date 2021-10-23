#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, mediaPonderada, peso1, peso2;

    printf("Digite a nota 1: ");
    scanf("%f", &nota1);

    printf("\nDigite o peso 1: ");
    scanf("%f", &peso1);

    printf("\nDigite a nota 2: ");
    scanf("%f", &nota2);

    printf("\nDigite o peso 2: ");
    scanf("%f", &peso2);

    mediaPonderada = (nota1*peso1)+(nota2*peso2)/(peso1+peso2);

    printf("\n A media ponderada de %.1f de peso %.1f com %.1f de peso %.1f é igual a: %.1f", nota1, peso1, nota2, peso2, mediaPonderada);

    return 0;
}
