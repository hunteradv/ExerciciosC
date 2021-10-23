#include <stdio.h>
#include <conio.h>

int main()
{
    int counter, num;

    for(counter = 1; counter <= 100; counter++)
    {
        printf("\n Digite um numero: ");
        scanf("%d", &num);

        if(num % 2 != 0)
        {
            printf("\n \t%d e impar \n", num);
        }
    }

    getch();
}
