#include <stdio.h>
#include <conio.h>

void main()
{
    int num[5], i, n, find = 0;
    // clrscr();
    printf("Enter Numbers \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("Enter Number To Find :: ");
    scanf("%d", &n);
    for (i = 0; i < 5; i++)
    {
        if (num[i] == n)
        {
            printf("%d \n", i);
            find = 1;
        }
    }
    if (find == 0)
    {
        printf("Not Found in Array");
    }
    getch();
}