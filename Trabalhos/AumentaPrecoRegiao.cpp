#include <stdio.h>

int i;

int getCodigo()
{
    int Id;
    do
    {
        printf ("\n\nDigite o codigo do produto %d: ", i + 1);
        scanf ("%d", &Id);    
        
        if (Id < 1 || Id > 5)
        {
            printf ("Digite um codigo valido!\n");
        }
        

    }while (Id < 1 || Id > 5);

    return Id;
}

float getPreco()
{
    float Preco;

    printf ("\nDigite o preco do produto %d: ", i + 1);
    scanf ("%f", &Preco);

    return Preco;
}

float calculaPreco(float Preco)
{
    if (Preco <= 100.0)
    {
        Preco += Preco * 0.25;
    }
    else
    {
        Preco += Preco * 0.20;
    }

    return Preco;
}

int main()
{
    int IdProduto[3];
    float  Preco[3];

    char * Regiao[] = {"Norte","Nordeste","Sudeste","Centro-Oeste","Sul"};

    for (i = 0; i < 3; i++)
    {
        IdProduto[i] = getCodigo();
        Preco[i] = getPreco();   
        Preco[i] = calculaPreco(Preco[i]);
    }

    for (i = 0; i < 3; i++)
    {
        printf ("Produto %d (Regiao: %s) - Preco com aumento: %f\n", i+1,Regiao[IdProduto[i] -1 ], Preco[i]);
    }
}