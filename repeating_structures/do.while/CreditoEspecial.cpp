#include <stdio.h>

int main () 
{
    float saldoMedio, creditoEspecial;
    int continuar;

    do
    {
        printf ("\nInforme o saldo medio do cliente: ");
        scanf ("%f", &saldoMedio);

        if (saldoMedio > 601.0)
        {
            creditoEspecial = saldoMedio * 0.4;
        }
        else
        {
            if(saldoMedio > 400.0)
            {
                creditoEspecial = saldoMedio * 0.3;
            }
            else
            {
                if(saldoMedio >= 200.0)
                {
                    creditoEspecial = saldoMedio * 0.2;
                }
                else
                {
                    if(saldoMedio >= 0.0)
                    {
                        printf ("\n Nao recebe credito especial");
                    }
                    else
                    {
                        printf ("\nSaldo Medio negativo");
                    }
                }
            }
        }

        printf ("\n \n \tSaldo medio R$ %.2f \tvalor do credito especial %.2f \n", saldoMedio, creditoEspecial);


        printf ("\nDigite 1 para finalizar: ");
        scanf ("%d", &continuar);
        
    } while (continuar != 1);


    printf ("\n \nFim da execucao do programa");
}