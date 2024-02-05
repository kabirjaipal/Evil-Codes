#include <iostream>

using namespace std;

int main()
{
    int choice;
    float num1, num2, result;

    while (true)
    {
        cout << "Arithmetic Calculator Menu:\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit\nEnter your choice (1-5): ";
        cin >> choice;

        if (choice == 5)
        {
            cout << "Exiting the program. Thank you!" << endl;
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice)
        {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                cout << "Error: Division by zero is not allowed!" << endl;
                continue;
            }
            break;
        default:
            cout << "Invalid option. Please choose a valid option (1-5)." << endl;
            continue;
        }

        cout << "Result: " << result << endl;
    }

    return 0;
}
