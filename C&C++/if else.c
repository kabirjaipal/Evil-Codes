#include <stdio.h>
#include <conio.h>

int main()
{
    int a;
    // clrscr();
    printf("Enter A Number 0/1 ::");
    scanf("%d", &a);
    if (a == 1)
    {
        printf("Oh I Know You are Full Stack Developer");
    }
    else
    {
        printf("Ompho i don't know you");
    }
    getch();
    return 0;
}