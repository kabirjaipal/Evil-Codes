#include <iostream>
using namespace std;

int main()
{
    int principal, rate, time;

    cout << "Enter the principal amount: ";
    cin >> principal;

    cout << "Enter the annual interest rate (%): ";
    cin >> rate;

    cout << "Enter the time (in years): ";
    cin >> time;

    int simpleInterest = (principal * rate * time) / 100;

    cout << "Simple Interest: " << simpleInterest << endl;

    return 0;
}
