#include <stdio.h>

#define n 5

int main ()
{
    int i, locacoes[80], locGratis[80], sobra[80];
    char nomeCliente[80][50]; //80 strings cada uma delas com no máximo 50 caracteres

    for (i = 0; i < 3; i++)
    {
        printf ("\nDigite o seu nome: ");
        fflush (stdin);
        gets (nomeCliente[i]);

        printf ("\nDigite as Locacoes: ");
        scanf ("%d", &locacoes[i]);
    }

    for (i = 0; i < n; i++)
    {
        locGratis[i] = locacoes[i] / 10;
        sobra[i] = locacoes[i] % 10;
    }

    for (i = 0; i < n; i++)
    {
        printf ("\n\t %s \t %d \t%d\t%d",nomeCliente[i],locacoes[i],locGratis[i],sobra[i]);
    }

    return 0;
}