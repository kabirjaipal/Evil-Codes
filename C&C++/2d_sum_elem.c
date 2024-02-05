#include <stdio.h>

void main()
{
    int a[3][3], sum = 0;
    printf("Enter The Values \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
    }
    printf("Sum of Elements %d ", sum);
}
