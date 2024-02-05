#include <stdio.h>
#include <conio.h>

void main()
{
    int n;
    // clrscr();
    printf("Enter Number \n");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    // getch();
}