#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, i = 0;
    // clrscr();
    printf("Enter Two Numbers :: \n");
    scanf("%d %d", &num1, &num2);

    for (i = 0; i <= num2; i++)
    {
        if (i >= num1 && i % 2 == 0)
        {
            printf("%d \n", i);
        }
    }

    // getch();
}