#include <stdio.h>
#include <conio.h>

int main ()
{
    int idade, idadeMaisVelho = 0, somaIdade = 0, contPessoas = 0, mediaIdade;
    char resposta = 's';

    //loop para ler as idades e calcular média de idade e achar idade do mais velho
    while (resposta == 's' || resposta== 'S')
    {
        printf ("\nDigite sua idade: ");
        scanf ("%d", &idade);
        somaIdade = somaIdade + idade;
        contPessoas++;
 
        //achar a idade do mais velho
        if (idade > idadeMaisVelho)
        {
            idadeMaisVelho = idade;
        }

        printf ("\nDeseja continuar a pesquisa? S/N\n");
        fflush(stdin);
        resposta = getche();
    }

    mediaIdade = somaIdade / contPessoas;

    //calcular e média de idades e mostrar os resultados
    printf("\nMedia de idade dos alunos da FATEC: %d \n", mediaIdade);
    printf("\nIdade do aluno mais velho da FATEC: %d \n", idadeMaisVelho);
    

    return 0;
}
