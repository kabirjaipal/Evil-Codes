#include <iostream>
using namespace std;

int main()
{
    int n, factorial = 1;
    cout << "Enter a integer: " << endl;
    cin >> n;

    if (n < 0)
        cout << "Factorial is not available for negative numbers." << endl;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            factorial *= i;
        }

        cout << "Factorial of " << n << " is " << factorial << endl;
    }

    return 0;
}
