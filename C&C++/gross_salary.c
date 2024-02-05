
#include <stdio.h>
#include <conio.h>

int main()
{
    char name[20];
    float basic_salary, hra, da, ta, gross_salary;
    // clrscr();
    printf("Enter Your Name :: \n");
    scanf("%s", name);

    printf("Enter Your Basic Salary :: \n");
    scanf("%f", &basic_salary);

    hra = (basic_salary * 4) / 100;
    da = (basic_salary * 5) / 100;
    hra = (basic_salary * 8) / 100;
    gross_salary = basic_salary + hra + da + ta;

    printf("Gross Salary Of %s is %.0f", name, gross_salary);
    getch();
    return 0;
}