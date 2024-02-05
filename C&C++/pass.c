#include <stdio.h>
#include <conio.h>

int main()
{
    float marks;
    // clrscr();
    printf("Enter Your Marks :: ");
    scanf("%f", &marks);

    if (marks <= 40)
    {
        printf("You are fail");
    }
    else if (marks > 40 && marks < 60)
    {
        printf("You are Second Division");
    }
    else if (marks > 60 && marks < 74)
    {
        printf("You are First Division");
    }
    else if (marks > 74 && marks < 100)
    {
        printf("You are A++");
    }
    else
    {

        printf("Please Enter Marks Between 1-100 \n");
    }
    // getch();
    return 0;
}