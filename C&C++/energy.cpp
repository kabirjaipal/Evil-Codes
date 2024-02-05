#include <iostream>
using namespace std;

int main()
{
    int tubeLights, fans, tubeLightUnitHour, unitCharge;
    float fanUnitHour;

    cout << "Enter the number of tube lights: ";
    cin >> tubeLights;

    cout << "Enter the number of fans: ";
    cin >> fans;

    cout << "Enter the unit hours for a tube light: ";
    cin >> tubeLightUnitHour;

    cout << "Enter the unit hours for a fan: ";
    cin >> fanUnitHour;

    cout << "Enter the unit charge: ";
    cin >> unitCharge;

    int totalUnit = (tubeLights * tubeLightUnitHour + fans * fanUnitHour) * 4;
    int totalMoney = unitCharge * totalUnit;

    cout << "Total Unit is " << totalUnit << endl;
    cout << "Total Money is " << totalMoney << endl;

    return 0;
}
