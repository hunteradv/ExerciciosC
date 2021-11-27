#include <stdio.h>

int main ()
{
    char nomeProduto[10][50];
    int id[10], i;
    float preco[10], precoNovo[10];

    for (i = 0; i < 2; i++)
    {
        printf ("\nProduto: ");
        fflush (stdin);
        gets(nomeProduto[i]);

        printf ("\nCodigo: ");
        scanf ("%d", &id[i]);

        printf ("\nPreco: ");
        scanf ("%f", &preco[i]);
    }

    for (i = 0; i < 2; i++)
    {
        if (id[i] % 2 == 0 && preco[i] > 1000)
        {
            precoNovo[i] = preco[i] + (preco[i] * 0.20);
        }
        else
        {
            if (id[i] % 2 == 0)
            {
                precoNovo[i] = preco[i] + (preco[i] * 0.15);
            }
            else
                if (preco[i] > 1000)
                {
                    precoNovo[i] = preco[i] + (preco[i] * 0.10);
                }
        }   
    }
    printf ("\nPRODUTO \t CODIGO \t PRECO \t NOVO PRECO");

    for (i = 0; i < 2; i++)
    {
        printf ("\n%s \t %d \t %2.f \t %2.f ", nomeProduto[i], id[i], preco[i], precoNovo[i]);
    } 
    
}