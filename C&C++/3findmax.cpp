#include <iostream>
using namespace std;

// Function to find the maximum of three numbers
int findMax(int a, int b, int c)
{
    int max = a;
    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}

int main()
{
    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    int maximum = findMax(num1, num2, num3);

    cout << "The maximum of the three numbers is: " << maximum << endl;

    return 0;
}
