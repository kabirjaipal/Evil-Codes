#include <stdio.h>
#include <conio.h>

void main()
{
    // clrscr();
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d \n", i);
        }
    }
    getch();
}