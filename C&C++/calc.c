#include <stdio.h>

int main()
{
    int a, b, sum, choice;
    printf("Enter Two Numbers :: \n");
    scanf("%d %d", &a, &b);
    printf("Choose Operator :: \n 1 for + \n 2 for - \n 3 for * \n 4 for / \n 0 for exit \n ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        sum = a + b;
        printf("%d + %d = %d \n", a, b, sum);
    }
    else if (choice == 2)
    {
        sum = a - b;
        printf("%d - %d = %d \n", a, b, sum);
    }
    else if (choice == 3)
    {
        sum = a * b;
        printf("%d * %d = %d \n", a, b, sum);
    }
    else if (choice == 4)
    {
        sum = a / b;
        printf("%d / %d = %d \n", a, b, sum);
    }
    else if (choice == 0)
    {
        return 0;
    }
    else
    {
        printf("\e[1;1H\e[2J");
        main();
    }
    return 0;
}