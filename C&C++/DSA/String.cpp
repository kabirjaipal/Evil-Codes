/*
, a string is a sequence of characters stored in contiguous memory locations. It is represented by the string class, which is defined in the <string> header file. The string class provides various member functions to manipulate strings, such as appending, concatenating, finding substrings, etc.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "Hello"; // Initializing a string variable

    // Length function
    cout << "Length of str1: " << str1.length() << endl;

    // Concatenation (+ operator)
    string str2 = " world!";
    string result = str1 + str2;
    cout << "Result of concatenation: " << result << endl;

    // Substring function
    string substr = str1.substr(1, 3);
    cout << "Substring of str1: " << substr << endl;

    // Find function
    int index = result.find("world");
    cout << "Index of 'world' in result: " << index << endl;

    // Replace function
    result.replace(index, 5, "everyone");
    cout << "Result after replacing 'world' with 'everyone': " << result << endl;

    // Erase function
    result.erase(5, 8);
    cout << "Result after erasing characters from index 5 to 12: " << result << endl;

    return 0;
}
