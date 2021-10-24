#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diasFaltados, qtdFilho, imposto;
    float salarioLiquido, salarioBruto, horasTrabalhoVoluntario, bonusHorasTrabalhoVoluntario, valorVendasMes, bonusValorVendas, descontoDiasFaltados, valorBolsaFilho;

    printf("Digite o salario mensal bruto do funcionario: ");
    scanf("%f", &salarioBruto);

    printf("Digite o valor de vendas do mes: ");
    scanf("%f", &valorVendasMes);

    printf("Digite o total de dias faltados: ");
    scanf("%d", &diasFaltados);

    printf("Digite o total de horas de trabalho voluntario: ");
    scanf("%f", &horasTrabalhoVoluntario);

    printf("Digite a quantidade de filhos com menos de 15 anos do funcionario: ");
    scanf("%d", &qtdFilho);


    if(valorVendasMes > 10000)
    {
        bonusValorVendas = salarioBruto * 0.15;
    }


    if(diasFaltados > 5)
    {
        descontoDiasFaltados = salarioBruto * 0.10;
    }
    else
    if(diasFaltados > 0 && diasFaltados <= 5)
    {
        descontoDiasFaltados = salarioBruto * 0.025;
    }

    if(horasTrabalhoVoluntario > 10)
    {
        bonusHorasTrabalhoVoluntario = 10 * horasTrabalhoVoluntario;
    }
    else
    {
        bonusHorasTrabalhoVoluntario = 8 * horasTrabalhoVoluntario;
    }

    if(qtdFilho > 0)
    {
        valorBolsaFilho = 250 * qtdFilho;
    }

    salarioLiquido = salarioBruto + bonusValorVendas + bonusHorasTrabalhoVoluntario + valorBolsaFilho - descontoDiasFaltados;

    if(salarioLiquido > 10750)
    {
        imposto = 11;
        salarioLiquido = salarioLiquido - (salarioLiquido * 0.11);
    }
    else
    {
        if(salarioLiquido > 5500 && salarioLiquido <= 10750)
        {
            imposto = 9;
            salarioLiquido = salarioLiquido - (salarioLiquido * 0.09);
        }
        else
        {
            if(salarioLiquido > 2460 && salarioLiquido <= 5500)
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