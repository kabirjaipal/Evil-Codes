#include <stdio.h>
#include <conio.h>

void main()
{
    int i = 1;
    // clrscr();
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d \n", i);
        }
        i++;
    }
    getch();
}