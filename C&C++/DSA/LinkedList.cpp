/*
A linked list is a dynamic data structure in C++ that consists of a sequence of nodes. Each node contains data and a pointer to the next node in the sequence. The first node in the sequence is called the head, and the last node points to NULL.
*/

#include <iostream>

using namespace std;

// Define a node structure
struct Node
{
    int data;
    Node *next;
};

// Define the linked list class
class LinkedList
{
private:
    Node *head;

public:
    // Constructor
    LinkedList()
    {
        head = NULL;
    }

    // Add a node to the end of the list
    void append(int value)
    {
        Node *new_node = new Node;
        new_node->data = value;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = new_node;
        }
        else
        {
            Node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }

    // Insert a node at the beginning of the list
    void prepend(int value)
    {
        Node *new_node = new Node;
        new_node->data = value;
        new_node->next = head;
        head = new_node;
    }

    // Delete the first occurrence of a value in the list
    void remove(int value)
    {
        if (head == NULL)
        {
            return;
        }

        if (head->data == value)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *temp = head;
        while (temp->next != NULL)
        {
            if (temp->next->data == value)
            {
                Node *temp2 = temp->next;
                temp->next = temp2->next;
                delete temp2;
                return;
            }
            temp = temp->next;
        }
    }

    // Get the length of the list
    int length()
    {
        int count = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }

    // Print the values in the list
    void print()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    LinkedList list;

    list.append(5);
    list.append(3);
    list.append(7);

    list.print(); // Output: 5 3 7

    list.prepend(2);

    list.print(); // Output: 2 5 3 7

    list.remove(3);

    list.print(); // Output: 2 5 7

    cout << "Length: " << list.length() << endl; // Output: Length: 3

    return 0;
}
