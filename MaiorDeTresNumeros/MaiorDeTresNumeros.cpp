#include <stdio.h>

int main(){

    float n1, n2, n3;

    printf("\n Digite o primeiro numero: ");
    scanf("%f", &n1);

    printf("\n Digite o segundo numero: ");
    scanf("%f", &n2);

    printf("\n Digite o terceiro numero: ");
    scanf("%f", &n3);

    if(n1 >= n2 && n1 >= n3){
        printf("\n O numero %.2f e o maior dos tres digitados!", n1);
    }
    else{
        if(n2 >= n3){
            printf("\n O numero %.1f e o maior dos tres digitados!",n2);
        }
        else{
            printf("\n O numero %.1f e o maior dos tres digitados!",n3);
        }
    }

    return 0;
}