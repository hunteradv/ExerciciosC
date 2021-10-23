#include<stdio.h>
#include<conio.h>

int main(){
    char carac;
    
    printf("\n Digite um caracter: ");
    fflush(stdin);
    //scanf("%c", &carac);
    carac = getche();

    if((carac >= 'A' && carac <= 'Z') || (carac >= 'a' && carac <='z')){
        printf("\n \t %c e uma letra", carac);
    }
    else{
        printf("\n %c nao e uma letra",carac);
    }
    return 0;
}