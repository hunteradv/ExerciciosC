#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diasFaltados, qtdFilho, imposto;
    float valorBolsaEducacao, salarioBruto, salarioLiquido, horasTrabalhoVoluntario;

    printf("Digite o salario mensal bruto do funcionario: ");
    scanf("%f", &salarioBruto);

    printf("Digite o total de dias faltados: ");
    scanf("%d", &diasFaltados);

    printf("Digite o total de horas de trabalho voluntario: ");
    scanf("%f", &horasTrabalhoVoluntario);

    printf("Digite a quantidade de filhos com menos de 15 anos do funcionario: ");
    scanf("%d", &qtdFilho);

    salarioLiquido = salarioBruto;

    if(qtdFilho > 0)
    {
        salarioLiquido = salarioLiquido + (250 * qtdFilho);
    }

    if(diasFaltados > 5)
    {
        salarioLiquido = salarioLiquido - (salarioLiquido * 0.10);
    }
    else
    {
        salarioLiquido = salarioLiquido - (salarioLiquido * 0.025);
    }

    if(horasTrabalhoVoluntario > 10)
    {
        salarioLiquido = salarioLiquido + (10 * horasTrabalhoVoluntario);
    }
    else
    {
        salarioLiquido = salarioLiquido + (8 * horasTrabalhoVoluntario);
    }

    if(salarioLiquido > 10750)
    {
        imposto = 11;
        salarioLiquido = salarioLiquido - (salarioLiquido * 0.11);
    }
    else
    {
        if(salarioLiquido >= 5500.01 && salarioLiquido <= 10750.00)
        {
            imposto = 9;
            salarioLiquido = salarioLiquido - (salarioLiquido * 0.09);
        }
        else
        {
            if(salarioLiquido >= 2460.00 && salarioLiquido <= 5500.00)
            {
                imposto = 7;
                salarioLiquido = salarioLiquido - (salarioLiquido * 0.07);
            }
            else
            {
                imposto = 5;
                salarioLiquido = salarioLiquido - (salarioLiquido * 0.05);
            }
        }
    }

    printf("Salario bruto: %.2f \n Imposto: %.0d% \n Salario liquido: %.2f", salarioBruto, imposto, salarioLiquido);

    return 0;
}