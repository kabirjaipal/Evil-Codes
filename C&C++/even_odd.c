#include <stdio.h>
#include <conio.h>

void main()
{
    int num;
    printf("Enter The Number :: \n");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is a Even Number", num);
    }
    else
    {
        printf("%d is a Odd Number", num);
    }
}

