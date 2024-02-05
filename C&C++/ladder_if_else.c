#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    // clrscr();
    printf("Enter Number Between 1-100 \n");
    scanf("%d", &num);

    if (num <= 50)
    {
        printf("Number is Less than 50");
    }
    else if (num <= 100)
    {
        printf("Number is Less than 100");
    }
    else
    {
        printf("Number is Greater Than 100");
    }
    getch();
}