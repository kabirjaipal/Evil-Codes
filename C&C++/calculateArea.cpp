#include <iostream>
using namespace std;

const double PI = 3.14;

class AreaCalc
{
private:
    double base, height, radius;

public:
    AreaCalc(double b, double h) : base(b), height(h), radius(0.0) {}

    AreaCalc(double r) : base(0.0), height(0.0), radius(r) {}

    double calcTriangleArea() const { return 0.5 * base * height; }

    double calcCircleArea() const { return PI * (radius * radius); }
};

int main()
{
    AreaCalc triangle(5.0, 8.0);
    cout << "Triangle Area: " << triangle.calcTriangleArea() << " sq. units\n";

    AreaCalc circle(3.0);
    cout << "Circle Area: " << circle.calcCircleArea() << " sq. units\n";

    return 0;
}
