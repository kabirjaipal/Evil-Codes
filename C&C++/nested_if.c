#include <stdio.h>
#include <conio.h>

void main()
{
    int age, experience, salary;
    // clrscr();
    printf("Enter Your Age :: ");
    scanf("%d", &age);
    printf("Enter Your Experience :: ");
    scanf("%d", &experience);
    printf("Enter Your Salary :: ");
    scanf("%d", &salary);

    if (age >= 50)
    {
        if (experience >= 5)
        {
            if (salary <= 10000)
            {
                printf("You will get Bonus !!");
            }
        }
    }
    getch();
}