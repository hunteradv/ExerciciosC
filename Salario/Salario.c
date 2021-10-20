#include <stdio.h>

int main(){

    float salario, vendas, comissao, impostos, salarioFinal;

    salario = 2500.00;
    vendas = 10000.00;

    comissao = salario * 0.075;
    salarioFinal = salario + comissao;
    impostos = salarioFinal * 0.03;
    salarioFinal = salarioFinal - impostos;

    printf("\n Salario R$ %.2f \n Comissao: R$ %.2f \n Impostos R$ %2.f \n Salario Final R$ %.2f \n \n", salario, comissao, impostos, salarioFinal);


    return 0;
}