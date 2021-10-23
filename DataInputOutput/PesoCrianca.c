#include <stdio.h>

int main()
{
    const float gramas = 1000.00;

    float pesoKg, pesoG;

    pesoKg = 23.5;
    pesoG = pesoKg * gramas;

    printf("\n Peso da crianca em kg: %.2f", pesoKg);
    printf("\n Peso da crianca em g: %.2f ",pesoG);

    return 0;
}
