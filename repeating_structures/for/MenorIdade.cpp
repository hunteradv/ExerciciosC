#include <stdio.h>

int main()
{
    int i, idade, menorIdade;

    printf ("Digite a idade da pessoa 1: ");
    scanf ("%d", &idade);
    menorIdade = idade;

    for (i = 2; i <= 5; i++)
    {
        printf ("Digite a idade da pessoa %d: ",i);
        scanf ("%d", &idade);

        if(idade < menorIdade)
        {
            menorIdade = idade;
        }
    }

    printf ("A menor idade e: %d", menorIdade);

    return 0;
}