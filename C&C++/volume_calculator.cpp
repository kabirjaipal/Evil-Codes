#include <iostream>
using namespace std;

const double PI = 3.14159265;

double volume(double radius)
{
    return PI * radius * radius;
}

double volume(double radius, double height)
{
    return PI * radius * radius * height;
}

double volume(double length, double width, double height)
{
    return length * width * height;
}

int main()
{
    int choice, radius, height, length, width;

    cout << "Volume Calculator Menu:" << endl;
    cout << "1. Circle\n2. Cylinder\n3. Cuboid\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    double vol = 0.0;

    switch (choice)
    {
    case 1:
        // Example radius value
        radius = 2;
        vol = volume(radius);
        break;
    case 2:
        // Example radius and height values
        radius = 2;
        height = 3;
        vol = volume(radius, height);
        break;
    case 3:
        // Example length, width, and height values
        length = 4;
        width = 5;
        height = 3;
        vol = volume(length, width, height);
        break;
    default:
        cout << "Invalid choice." << endl;
        return 1;
    }

    cout << "Volume: " << vol << endl;
    return 0;
}
