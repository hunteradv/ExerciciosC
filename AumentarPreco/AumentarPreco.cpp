#include <stdio.h>

int main(){

    int idDepartamento;
    float valor, novoValor;

    printf("Digite o codigo do departamento: ");
    scanf("%d", &idDepartamento);

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    if(idDepartamento == 1){

        novoValor = valor + (valor * 0.05);
    }else{

        novoValor = valor + (valor * 0.074);
    }

    printf("O produto tinha o valor de %.2f e o novo valor e %.2f", valor, novoValor);

    return 0;
}