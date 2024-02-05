#include <iostream>
using namespace std;

int main()
{
    try
    {
        int numerator, denominator, result;

        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        if (denominator == 0)
        {
            throw "Error: Division by zero is not allowed.";
        }

        result = numerator / denominator;

        cout << "Result of division: " << result << endl;
    }
    catch (const char *err)
    {
        cerr << "Exception caught: " << err << endl;
    }

    return 0;
}
