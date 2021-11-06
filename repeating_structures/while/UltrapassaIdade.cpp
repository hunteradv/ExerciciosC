#include <stdio.h>

int main()
{
    float alturaPedro = 1.25, alturaJoao = 1.40;
    int anos = 0;

    while (alturaPedro <= alturaJoao)
    {
        alturaJoao = alturaJoao + 0.03;
        alturaPedro = alturaPedro + 0.05;
        anos++;
    }

    printf ("\nSerao necessarios %d anos para Pedro ser mais alto que Joao", anos);
    
}