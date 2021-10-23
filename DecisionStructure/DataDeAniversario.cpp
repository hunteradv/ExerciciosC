#include <stdio.h>

main(){
    
    int diaNasc, diaAtual, mesNasc, mesAtual, anoNasc, anoAtual, idade;
    
    printf("\n Digite o dia do seu nascimento: ");
    scanf("%d", &diaNasc);

    printf("\n Digite o mes do seu nascimento: ");
    scanf("%d", &mesNasc);

    printf("\n Digite o ano do seu nascimento: ");
    scanf("%d", &anoNasc);

    printf("\n Digite o dia atual: ");
    scanf("%d", &diaAtual);

    printf("\n Digite o mes atual: ");
    scanf("%d", &mesAtual);

    printf("\n Digite o ano atual: ");
    scanf("%d", &anoAtual);

    idade = anoAtual - anoNasc;

    printf("%d", idade);

    if(mesNasc == mesAtual){
        if(diaNasc == diaAtual){
            printf ("\n Parabens! hoje e seu aniversario!");
        }
        else{
            if(diaNasc > diaAtual){
                idade = idade - 1;
                printf("\n ainda nao e seu dia de aniversario, %d anos de idade", idade);
            }
            else{
                printf("\n seu aniversario ja passou, %d anos de idade", idade);
            }
        }
    }
    else{
        if(mesNasc > mesAtual){
            idade = idade - 1;
            printf("\n ainda nao e o mes do seu aniversario, %d anos de idade", idade);
        }
        else{
            printf("\n seu aniversario ja passou, %d anos de idade", idade);
        }
    }
}