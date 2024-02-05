#include <stdio.h>
#include <conio.h>
 
void main()
{
    int index;
    // clrscr();
    printf("Enter Month Index Between 1-12 :: ");
    scanf("%d", &index);
    if (index == 1)
    {
        printf("January \n");
    }
    else if (index == 2)
    {
        printf("February \n");
    }
    else if (index == 3)
    {
        printf("March \n");
    }
    else if (index == 4)
    {
        printf("April \n");
    }
    else if (index == 5)
    {
        printf("May \n");
    }
    else if (index == 6)
    {
        printf("Jun \n");
    }
    else if (index == 7)
    {
        printf("July \n");
    }
    else if (index == 8)
    {
        printf("August \n");
    }
    else if (index == 9)
    {
        printf("September \n");
    }
    else if (index == 10)
    {
        printf("October \n");
    }
    else if (index == 11)
    {
        printf("November \n");
    }
    else if (index == 12)
    {
        printf("December \n");
    }
    else
    {
        printf("Index Must Be 1-12 \n");
    }
    getch();
}