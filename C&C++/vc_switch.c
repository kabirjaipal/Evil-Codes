#include <stdio.h>
#include <conio.h>

void main()
{
    const char a;
    // clrscr();
    printf("Enter a Character Between a-z or A-Z :: \n");
    scanf("%c", &a);

    switch (a)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
    {
        printf("Vowel");
    }
    break;

    default:
    {
        printf("Consonent");
    }
    break;
    }

    // getch();
}