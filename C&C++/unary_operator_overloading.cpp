#include <iostream>
using namespace std;

class Number
{
private:
    int num;

public:
    Number(int number)
    {
        num = number;
    }

    Number operator++()
    {
        return num += 10;
    }

    Number operator--()
    {
        return num -= 10;
    }

    void display()
    {
        cout << num << endl;
    }
};

int main()
{
    Number num(20);

    Number sub = --num;
    sub.display();
    Number add = ++num;
    add.display();

    return 0;
}
