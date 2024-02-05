#include <iostream>
using namespace std;

int main()
{
    float celcius, fahrenheit;
    cout << "Enter Celcius Value" << endl;
    cin >> celcius;
    fahrenheit = (celcius * 9 / 5) + 32;
    cout << "Feet is " << fahrenheit << endl;
    return 0;
}