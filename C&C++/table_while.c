#include <stdio.h>
#include <conio.h>

void main()
{
    int num, i = 1;
    // clrscr();
    printf("Enter A Number to Print Table :: \n");
    scanf("%d", &num);

    while (i <= 10)
    {
        printf("%d * %d = %d \n", num, i, num * i);
        i++;
    }

    // getch();
}