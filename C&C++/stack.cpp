#include <iostream>
using namespace std;

#define MAX_SIZE 100

class Stack
{
private:
    int data[MAX_SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    bool isEmpty() const
    {
        return top == -1;
    }

    bool isFull() const
    {
        return top == MAX_SIZE - 1;
    }

    int push(int value)
    {
        if (isFull())
        {
            cout << "Stack is Full" << endl;
            return -1;
        }

        data[++top] = value;
        return value;
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return data[top--];
    }

    int peek() const
    {
        if (isEmpty())
        {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return data[top];
    }
};

int main()
{
    Stack stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top Item: " << stack.peek() << endl;

    cout << "Popped Item: " << stack.pop() << endl;
    cout << "Popped Item: " << stack.pop() << endl;
    cout << "Popped Item: " << stack.pop() << endl;

    cout << "Top Item: " << stack.peek() << endl;

    return 0;
}
