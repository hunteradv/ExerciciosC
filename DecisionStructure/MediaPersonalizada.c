#include <stdio.h>

int main (int agrc, char** argv){

    float notaProva1, notaProva2, mediaTrab, mediaProva, mediaFinal;
    char nomeAluno[20];

    printf("Digite o nome do aluno: ");

    fflush(stdin);

    scanf("%s", &nomeAluno);

    printf("\nDigite a nota da prova 1: ");
    scanf("%f", &notaProva1);

    printf("\nDigite a nota da prova 2: ");
    scanf("%f", &notaProva2);

    printf("\nDigite a nota media do trabalho: ");
    scanf("%f", &mediaTrab);

    mediaProva = (notaProva1 + notaProva2)/2.0;
    mediaFinal = 0.7 * mediaProva + 0.3 * mediaTrab;

    if(mediaFinal >= 6.0){

        printf("\n Voce esta aprovado! com media final de %.1f",mediaFinal);
    }else{

        printf("\n Voce foi reprovado, com media final de %.1f",mediaFinal);
    }
    return 0;
}