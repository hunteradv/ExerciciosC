#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int tipoDoce, contVendas, continuar, IdDoce;
    float quantidadeDoce, valorDoce, valorQuilo;



    for (contVendas = 0; contVendas < 25; contVendas ++)
    {
        do
        {
            printf ("\nLANCAMENTOS PARA CLIENTE %d\n", contVendas + 1);
            printf("\nDigite o tipo do doce desejado: \n 1- Trufa \n 2- Torta \n 3- Bolo \n Digite aqui: ");
            scanf("%d", &tipoDoce);
            printf("\nDigite a quantidade (em Kg): ");
            scanf("%f", &quantidadeDoce);

            if(quantidadeDoce <= 0)
            {
                printf("\nQuantidade de doce (em Kg) invalida");
                exit(0);
            }

            switch (tipoDoce)
            {
            case 1:
                if(quantidadeDoce > 5.0)
                {
                    valorDoce = valorDoce + (quantidadeDoce * 22);
                    valorQuilo = 22;
                    IdDoce = 1;
                }
                else
                {
                    valorDoce = valorDoce + (quantidadeDoce * 25);
                    valorQuilo = 25;
                    IdDoce = 1;
                }
                break;
            
            case 2:
                if(quantidadeDoce > 5.0)
                {
                    valorDoce = valorDoce + (quantidadeDoce * 24.45);
                    valorQuilo = 24.45;
                    IdDoce = 2;
                }
                else
                {
                    valorDoce = valorDoce + (quantidadeDoce * 22.25);
                    valorQuilo = 22.25;
                    IdDoce = 2;
                }
                break;

            case 3:
                if(quantidadeDoce > 5.0)
                {
                    valorDoce = valorDoce + (quantidadeDoce * 30);
                    valorQuilo = 30;
                    IdDoce = 3;
                }
                else
                {
                    valorDoce = valorDoce + (quantidadeDoce * 35);
                    valorQuilo = 35;
                    IdDoce = 3;
                }
                break;
                
            default:
                printf("\nDigite um numero valido (1 a 3)");
                exit(0);
                break;           
            }

            printf ("\nVENDA PARA CLIENTE %d: ",contVendas + 1);

            switch (IdDoce)
            {
            case 1:
                printf ("\n1 - Trufa");
                break;
            case 2:
                printf ("\n2 - Torta");
                break;
            case 3:
                printf ("\n3 - Bolo");
                break;      
            default:
                break;
            }
            printf("\nPeso: %.2fKg\nValor do Quilo: %.2f\nTotal a pagar: %.2f\n", quantidadeDoce, valorQuilo, valorDoce); 

            printf ("\nDeseja lancar mais um produto para o cliente %d? caso nao tecle '0', caso sim tecle qualquer outra tecla: ", contVendas + 1);
            scanf ("%d", &continuar);

        }while (continuar != 0);
        
        valorDoce = 0; 
    }  
    
    return 0;
}