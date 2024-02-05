#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2, i = 0;
    // clrscr();
    printf("Enter Two Numbers :: \n");
    scanf("%d %d", &num1, &num2);

    while (i <= num2)
    {
        if (i >= num1 && i % 2 == 0)
        {
            printf("%d \n", i);
        }
        i++;
    }
    // getch();
}