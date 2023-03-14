/*
In C++, arrays are a built-in data structure that allows you to store a collection of elements of the same type.
*/

#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    // Read operation - print the contents of the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void addElement(int arr[], int &size, int element)
{
    // Create operation - add a new element to the end of the array
    arr[size] = element;
    size++;
}

void updateElement(int arr[], int size, int index, int newValue)
{
    // Update operation - modify an element of the array
    arr[index] = newValue;
}

void deleteElement(int arr[], int &size, int index)
{
    // Delete operation - remove an element from the array
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main()
{
    int myArray[5] = {10, 20, 30, 40, 50};
    int size = 5;

    // Read operation - print the contents of the array
    printArray(myArray, size);

    // Create operation - add a new element to the end of the array
    addElement(myArray, size, 60);

    // Read operation - print the contents of the updated array
    printArray(myArray, size);

    // Update operation - modify an element of the array
    updateElement(myArray, size, 3, 45);

    // Read operation - print the contents of the updated array
    printArray(myArray, size);

    // Delete operation - remove an element from the array
    deleteElement(myArray, size, 1);

    // Read operation - print the contents of the updated array
    printArray(myArray, size);

    return 0;
}
