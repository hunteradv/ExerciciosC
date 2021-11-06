#include <stdio.h>

int main()
{
    int i, n;
    float somatorio = 0.0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        somatorio = somatorio + (1.0 / i);
    }

    printf ("\n \nSomatorio: %f", somatorio);

    return 0;
}