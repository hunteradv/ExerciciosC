#include<stdio.h>

int main(){
    int num;

    printf("\n Digite um numero referente ao mes: ");
    scanf("%d", &num);

    switch (num)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("O mes selecionado contem 31 dias");
            break;
        
        case 4: case 6: case 9: case 11:
            printf("O mes selecionado contem 30 dias");
            break;

        case 2:
            printf("O mes selecionado contem 28 dias");
            break;
    
    default:
        break;
    }
}