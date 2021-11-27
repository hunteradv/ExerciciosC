#include <stdio.h>

int main()
{
    float valorCompra = 0.0, totalVendaVista = 0.0, totalVendaPrazo = 0.0, totalVendas = 0.0;
    char tipoPagamento;

    //loop para calcular totais
    while (valorCompra >= 0.0)
    {
        //comunicação com o usuário
        printf ("Digite o valor da compra R$ ");
        scanf ("%f", &valorCompra);

        if (valorCompra >= 0.0)
        {
            printf ("\nDigite o tipo de pagamento V - A vista / P - A prazo: ");
            fflush(stdin);
            scanf("%c", &tipoPagamento);

            //escolher o tipo de pagamento
            switch (tipoPagamento)
            {
            case 'v': case 'V':
                totalVendaVista = totalVendaVista + valorCompra;
                break;

            case 'p': case 'P':
                totalVendaPrazo = totalVendaPrazo + valorCompra;
                break;
            
            default:
                printf ("\nTipo de pagamento invalido. Tente novamente\n");
                break;
            }
        }
        else
        {
            printf ("\nPrograma será finalizado com sucesso");
        }
        
    }

    totalVendas = totalVendaVista + totalVendaPrazo;
    printf ("\nTotal de vendas a vista    R$ %.2f \n", totalVendaVista);
    printf ("\nTotal de vendas a prazo    R$ %.2f \n", totalVendaPrazo);   
    printf ("\nTotal de vendas realizadas R$ %.2f \n", totalVendas); 
    return 0;
}
