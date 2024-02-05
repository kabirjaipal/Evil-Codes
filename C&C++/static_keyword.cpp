#include <iostream>
using namespace std;

class Example
{
public:
    static int staticVar;

    static void staticFunction()
    {
        cout << "Inside staticFunction." << endl;
    }
};

int Example::staticVar = 0;

int main()
{
    cout << "Static variable value: " << Example::staticVar << endl;

    Example::staticVar = 42;
    cout << "Updated static variable value: " << Example::staticVar << endl;

    Example::staticFunction();

    return 0;
}
