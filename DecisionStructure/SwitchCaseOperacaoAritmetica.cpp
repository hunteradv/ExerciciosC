#include<stdio.h>
#include<conio.h>

int main(){

    int num1, num2, result;
    char operador;
    

    printf("\n Digite o primeiro numero para a operacao: ");
    scanf("%d", &num1);
    printf("\n Digite o operador (+, -, * ou /): ");
    fflush(stdin);
    operador = getche();
    printf("\n Digite o segundo numero para a operacao: ");
    scanf("%d", &num2);
    
    switch (operador)
    {
    case '/':
        if(num2 <= 0){
            printf("\n Nao e possivel realizar divisao por 0");
        }
        else{
            result = num1 / num2;
            printf("\n O resultado da divisao e %d", result);
        }
        break;
    
    case '+':
        result = num1 + num2;
        printf("\n O resultado da soma e %d", result);
        break;

    case '-':
        result = num1 - num2;
        printf("\n O resultado da subtracao e %d", result);
        break;

    case '*':
        result = num1 - num2;
        printf("\n O resultado da multiplicacao e %d", result);
        break;

    default:
        printf("\n O operador digitado é invalido");
        break;
    }
}