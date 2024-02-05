#include <iostream>

using namespace std;

// function for converting string to upper
string stringToUpper(string oString)
{
    for (int i = 0; i < oString.length(); i++)
    {
        oString[i] = toupper(oString[i]);
    }
    return oString;
}

int main()
{
    // use the function to convert string. No additional variables needed.
    string a;
    cout << "Enter String " << endl;
    cin >> a;
    cout << stringToUpper(a) << endl;
    return 0;
}