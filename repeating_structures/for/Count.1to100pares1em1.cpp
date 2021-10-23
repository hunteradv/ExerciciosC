#include <stdio.h>
#include <conio.h>

int main()
{
    int counter;

    for(counter = 1; counter <= 100; counter++)
    {
        if(counter % 2 == 0)
        {
            printf("\n %d", counter);
        }
    }
    
    getch();
}