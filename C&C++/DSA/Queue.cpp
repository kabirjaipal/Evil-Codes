/*
Queue is a linear data structure in C++ that stores a collection of elements in a sequence, following the FIFO (First-In-First-Out) principle.
*/

#include <iostream>
#include <queue>

using namespace std;

// Create (Enqueue) function
void enqueue(queue<int> &q, int val)
{
    q.push(val);
    cout << "Element " << val << " added to the queue." << endl;
}

// Read (Peek) function
void peek(queue<int> q)
{
    if (!q.empty())
    {
        cout << "The first element in the queue is: " << q.front() << endl;
    }
    else
    {
        cout << "The queue is empty." << endl;
    }
}

// Update function
void update(queue<int> &q, int old_val, int new_val)
{
    if (!q.empty())
    {
        queue<int> temp;
        bool found = false;

        while (!q.empty())
        {
            int val = q.front();
            q.pop();

            if (val == old_val)
            {
                found = true;
                temp.push(new_val);
            }
            else
            {
                temp.push(val);
            }
        }

        if (!found)
        {
            cout << "Element " << old_val << " not found in the queue." << endl;
        }
        else
        {
            q = temp;
            cout << "Element " << old_val << " updated to " << new_val << "." << endl;
        }
    }
    else
    {
        cout << "The queue is empty." << endl;
    }
}

// Delete (Dequeue) function
void dequeue(queue<int> &q)
{
    if (!q.empty())
    {
        cout << "Element " << q.front() << " removed from the queue." << endl;
        q.pop();
    }
    else
    {
        cout << "The queue is empty." << endl;
    }
}

int main()
{
    queue<int> q;

    // Create (Enqueue) operation
    enqueue(q, 10);
    enqueue(q, 20);
    enqueue(q, 30);

    // Read (Peek) operation
    peek(q);

    // Update operation
    update(q, 20, 25);

    // Read (Peek) operation after update
    peek(q);

    // Delete (Dequeue) operation
    dequeue(q);

    // Read (Peek) operation after delete
    peek(q);

    return 0;
}
