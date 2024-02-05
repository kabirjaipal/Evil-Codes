#include <stdio.h>

void main()
{
    int arr[3], min, larg;
    printf("Enter The Values :: ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);
    }
    // for find small number
    min = arr[0];
    for (int i = 1; i < 3; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Smallest Element is %d \n", min);
    // for find largest number
    larg = arr[0];
    for (int i = 1; i < 3; i++)
    {
        if (arr[i] > min)
            larg = arr[i];
    }
    printf("Largest Element is %d \n", larg);
}