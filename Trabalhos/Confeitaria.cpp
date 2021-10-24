#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tipoDoce;
    float quantidadeDoce, valorDoce, valorQuilo;
    
    printf("Digite o tipo do doce desejado: \n 1- Trufa \n 2- Torta \n 3- Bolo \n Digite aqui: ");
    scanf("%d", &tipoDoce);
    printf("Digite a quantidade (em Kg): ");
    scanf("%f", &quantidadeDoce);

    if(quantidadeDoce <= 0)
    {
        printf("Quantidade de doce (em Kg) invalida");
        exit(0);
    }

    switch (tipoDoce)
    {
    case 1:
        if(quantidadeDoce > 5.0)
        {
            valorDoce = valorDoce + (quantidadeDoce * 22);
            valorQuilo = 22;
            printf("Tipo de doce: Trufa\n");
        }
        else
        {
            valorDoce = valorDoce + (quantidadeDoce * 25);
            valorQuilo = 25;
            printf("Tipo de doce: Trufa\n");
        }
        break;
    
    case 2:
        if(quantidadeDoce > 5.0)
        {
            valorDoce = valorDoce + (quantidadeDoce * 24.45);
            valorQuilo = 24.45;
            printf("Tipo de doce: Torta\n");
        }
        else
        {
            valorDoce = valorDoce + (quantidadeDoce * 22.25);
            valorQuilo = 22.25;
            printf("Tipo de doce: Torta\n");
        }
        break;

    case 3:
        if(quantidadeDoce > 5.0)
        {
            valorDoce = valorDoce + (quantidadeDoce * 30);
            valorQuilo = 30;
            printf("Tipo de doce: Bolo\n");
        }
        else
        {
            valorDoce = valorDoce + (quantidadeDoce * 35);
            valorQuilo = 35;
            printf("Tipo de doce: Bolo\n");
        }
        break;
        
    default:
        printf("Digite um numero valido (1 a 3)");
        exit(0);
        break;
    }

    printf("Peso: %.2fKg\nValor do Quilo: %.2f\nTotal a pagar: %.2f\n", quantidadeDoce, valorQuilo, valorDoce);

    return 0;
}
