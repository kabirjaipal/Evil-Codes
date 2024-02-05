#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i = 1;
    // clrscr();
    printf("Enter A Number to Print Table :: \n");
    scanf("%d", &num);

    for (i; i <= 10; i++)
    {
        printf("%d * %d = %d \n", num, i, num * i);
    }

    // getch();
}