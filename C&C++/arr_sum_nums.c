#include <stdio.h>
#include <conio.h>

void main()
{
    int num[5], i, sum = 0;
    // clrscr();
    printf("Enter Numbers To Sum \n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
        sum += num[i];
    }
    printf("%d", sum);
    getch();
}