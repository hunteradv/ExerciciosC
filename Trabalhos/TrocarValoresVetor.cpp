#include <stdio.h>

int main ()
{
    int vetor[20], i, iTroca = 19, trocaValor;

    for (i = 0; i < 20; i++)
    {
        printf ("Digite um numero para atribuir ao vetor: ");
        scanf ("%d", &vetor[i]);
    }

    printf ("Vetor Original: ");
    for (i = 0; i < 20; i++)
    {
        printf ("\t [%d] \t", vetor[i]);
    }

    for (i = 0; i < 10; i++)
    {
        trocaValor = vetor[iTroca];
        vetor[iTroca] = vetor[i];
        vetor[i] = trocaValor;
        iTroca--;

    }    

    printf ("\n \n \nVetor Modificado: ");

    for (i = 0; i < 20; i++)
    {
        printf ("\t [%d] \t", vetor[i]);
    }
}