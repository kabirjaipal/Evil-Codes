#include <iostream>
using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int n)
{
    if (n == 0)
    {
        cout << "Binary: 0" << endl;
        return;
    }

    int binaryNum[32];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    cout << "Binary: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
    cout << endl;
}

// Function to convert decimal to hexadecimal
void decimalToHexadecimal(int n)
{
    if (n == 0)
    {
        cout << "Hexadecimal: 0" << endl;
        return;
    }

    char hexNum[100];
    int i = 0;
    while (n > 0)
    {
        int remainder = n % 16;
        if (remainder < 10)
        {
            hexNum[i] = remainder + 48; // Convert to ASCII
        }
        else
        {
            hexNum[i] = remainder + 55; // Convert to ASCII
        }
        n = n / 16;
        i++;
    }

    cout << "Hexadecimal: 0x";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << hexNum[j];
    }
    cout << endl;
}

// Function to convert decimal to octal
void decimalToOctal(int n)
{
    if (n == 0)
    {
        cout << "Octal: 0" << endl;
        return;
    }

    int octalNum[100];
    int i = 0;
    while (n > 0)
    {
        octalNum[i] = n % 8;
        n = n / 8;
        i++;
    }

    cout << "Octal: ";
    for (int j = i - 1; j >= 0; j--)
    {
        cout << octalNum[j];
    }
    cout << endl;
}

int main()
{
    int decimalNumber;

    cout << "Enter a decimal number: ";
    cin >> decimalNumber;

    decimalToBinary(decimalNumber);
    decimalToHexadecimal(decimalNumber);
    decimalToOctal(decimalNumber);

    return 0;
}
