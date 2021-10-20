#include<stdio.h>

int main(){

    int num;

    printf("\n Digite um numero (referente ao mes): ");
    scanf("%d", &num);

    switch (num)
    {
        case 1:
            printf("\n 1- Janeiro");
            break;

        case 2:
            printf("\n 2- Fevereiro");
            break;
        
        case 3:
            printf("\n 3- Março");
            break;

        case 4:
            printf("\n 4- Abril");
            break;

        case 5:
            printf("\n 5- Maio");
            break;

        case 6:
            printf("\n 6- Junho");
            break;

        case 7:
            printf("\n 7- Julho");
            break;

        case 8:
            printf("\n 8- Agosto");
            break;

        case 9:
            printf("\n 9- Setembro");
            break;

        case 10:
            printf("\n 10- Outubro");
            break;

        case 11:
            printf("\n 11- Novembro");
            break;

        case 12:
            printf("\n 12- Dezembro");
            break;
        
        default:
            printf("\n nao existe mes referente ao numero (%d) digitado",num);
            break;
    }
}