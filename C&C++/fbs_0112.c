#include <stdio.h>
#include <conio.h>

void main()
{
    int f1 = 0, f2 = 1, f3 = 0, n, i;
    // clrscr();
    printf("Enter a Number \n");
    scanf("%d", &n);

    printf("%d \t %d \t", f1, f2);
    for (i = 0; i < n; i++)
    {
        f3 = f1 + f2;
        printf("%d \t", f3);
        f1 = f2;
        f2 = f3;
    }
    // getch();
}