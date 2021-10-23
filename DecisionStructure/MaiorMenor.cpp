#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if(a < b){
        printf("%d %d", a, b);
    }else{
        printf("%d %d", b, a);
    }

    return 0;
}
