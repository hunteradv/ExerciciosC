#include <stdio.h>
#include <conio.h>

int main()
{
    int counter;

    for(counter = 2; counter <= 100; counter+=2)
    {
        printf("\n %d", counter);
    }

    getch();
}