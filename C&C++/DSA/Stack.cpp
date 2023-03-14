/*
A stack in C++ is a linear data structure that follows the Last-In-First-Out (LIFO) principle. It means that the last element inserted into the stack is the first one to be removed. Stacks can be implemented using arrays
*/

#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

class Stack
{
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack()
    {
        top = -1;
    }

    bool is_empty()
    {
        return top == -1;
    }

    bool is_full()
    {
        return top == MAX_SIZE - 1;
    }

    void push(int value)
    {
        if (is_full())
        {
            cout << "Stack overflow!" << endl;
            return;
        }

        arr[++top] = value;
    }

    void pop()
    {
        if (is_empty())
        {
            cout << "Stack underflow!" << endl;
            return;
        }

        top--;
    }

    int peek()
    {
        if (is_empty())
        {
            cout << "Stack is empty!" << endl;
            return -1;
        }

        return arr[top];
    }

    void print()
    {
        if (is_empty())
        {
            cout << "Stack is empty!" << endl;
            return;
        }

        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Stack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);

    stack.print(); // Output: 3 2 1

    stack.pop();

    stack.print(); // Output: 2 1

    cout << "Top element: " << stack.peek() << endl; // Output: Top element: 2

    stack.pop();
    stack.pop();
    stack.pop(); // Output: Stack underflow!

    return 0;
}
