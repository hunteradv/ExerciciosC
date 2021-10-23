#include<stdio.h>

int main(){

    float valorTotalCompra, valorComDesconto;
    int idPagamento;

    printf("Digite o Valor total da compra R$: ");
    scanf("%f", &valorTotalCompra);

    printf("Digite o codigo do pagamento: ");
    scanf("%d", &idPagamento);

    if(idPagamento == 1){

        valorTotalCompra = valorTotalCompra - (valorTotalCompra * 0.05);

    }
    printf("\nO valor a ser pago sera: %.2f", valorTotalCompra);

    
}