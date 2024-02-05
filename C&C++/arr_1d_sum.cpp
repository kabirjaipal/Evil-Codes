#include <iostream>
using namespace std;

const int arraySize = 5;

void addArrays(int array1[], int array2[], int result[])
{
    for (int i = 0; i < arraySize; i++)
    {
        result[i] = array1[i] + array2[i];
    }
}

int main()
{
    int array1[arraySize], array2[arraySize], result[arraySize];

    cout << "Enter elements for the first array: ";
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array1[i];
    }

    cout << "Enter elements for the second array: ";
    for (int i = 0; i < arraySize; i++)
    {
        cin >> array2[i];
    }

    // Call the function to add arrays
    addArrays(array1, array2, result);

    cout << "Resultant array after addition: ";
    for (int i = 0; i < arraySize; i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
