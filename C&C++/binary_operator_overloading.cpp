
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

    Number operator+(Number &other)
    {
        return Number(num + other.num);
    }

    Number operator*(Number &other)
    {
        return Number(num * other.num);
    }

    void display()
    {
        cout << num << endl;
    }
};

int main()
{
    Number num1(1);
    Number num2(2);

    Number sub = num1 + num2;
    Number mul = num1 * num2;
    sub.display();
    mul.display();

    return 0;
}
