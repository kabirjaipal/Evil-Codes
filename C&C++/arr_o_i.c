#include <stdio.h>
#include <conio.h>

void main()
{
    int num[5], i;
    // clrscr();
    printf("Enter Numbers \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }
    getch();
}