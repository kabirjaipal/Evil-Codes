#include <iostream>
using namespace std;

class TablePrinter
{
private:
    int number;

public:
    TablePrinter() { number = 0; }

    void setNumber(int num) { number = num; }

    void printTable()
    {
        cout << "Table of " << number << ":\n";
        for (int i = 1; i <= 10; ++i)
        {
            cout << number << " * " << i << " = " << (number * i) << "\n";
        }
    }
};

int main()
{
    TablePrinter table;

    int userNumber;
    cout << "Enter a number: ";
    cin >> userNumber;

    table.setNumber(userNumber);

    table.printTable();

    return 0;
}
