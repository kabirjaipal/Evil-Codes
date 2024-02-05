#include <iostream>

class MyClass
{
private:
    int data;

public:
    MyClass(int value)
    {
        data = value;
    }

    friend void displayData(const MyClass obj);
};

void displayData(const MyClass obj)
{
    std::cout << "Data value: " << obj.data << std::endl;
}

int main()
{
    MyClass myObject(42);

    displayData(myObject);

    return 0;
}
