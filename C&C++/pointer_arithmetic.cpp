#include <iostream>
using namespace std;

int main()
{
    int num1 = 5, num2 = 3;
    int *ptrNum1 = &num1, *ptrNum2 = &num2;

    cout << "Adding: " << *ptrNum1 + *ptrNum2 << endl;
    cout << "Subtracting: " << *ptrNum1 - *ptrNum2 << endl;
    cout << "Multiplication: " << *ptrNum1 * *ptrNum2 << endl;
    cout << "Division: " << *ptrNum1 / *ptrNum2 << endl;

    return 0;
}
