#include <stdio.h>
#include <conio.h>

void main()
{
    char a;
    // clrscr();
    printf("Enter a Character Between a-z or A-Z :: \n");
    scanf("%c", &a);
    if (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a == 'u' || a == 'U')
    {
        printf("%c is a Vowel \n", a);
    }
    else
    {
        printf("%c is a Consonent \n", a);
    }
    getch();
}