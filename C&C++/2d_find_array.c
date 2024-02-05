#include <stdio.h>

void main()
{
    int a[3][3], sum = 0, n, isFind = 0;
    printf("Enter The Values \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    printf("Enter Number To Find in Array \n");
    scanf("%d", &n);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == n)
            {
                printf("%d %d", i, j);
                isFind = 1;
            }
        }
    }
    if (isFind == 0)
    {
        printf("%d not found in array !!", n);
    }
}
