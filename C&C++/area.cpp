#include <iostream>
using namespace std;

int main()
{
    int choice;
    double area, PI = 3.14;

    cout << "Area Calculator" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl;
    cout << "Enter your choice (1/2/3): ";
    cin >> choice;

    switch (choice)
    {
    case 1: // Triangle
        double base, height;
        cout << "Enter the base and height of the triangle: ";
        cin >> base >> height;
        area = 0.5 * base * height;
        break;

    case 2: // Rectangle
        double length, width;
        cout << "Enter the length and width of the rectangle: ";
        cin >> length >> width;
        area = length * width;
        break;

    case 3: // Circle
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        area = PI * radius * radius;
        break;

    default:
        cout << "Invalid choice." << endl;
        return 1;
    }

    cout << "Area: " << area << endl;

    return 0;
}
