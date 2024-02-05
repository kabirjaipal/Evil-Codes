#include <iostream>
#include <string>
using namespace std;

struct Item
{
    string name;
    double price;
    int quantity;
};

int main()
{
    char addMore;
    double totalCost = 0;

    cout << "=== Grocery Bill ===\n";

    do
    {
        Item item;

        cout << "Enter the name of the item: ";
        cin >> item.name;

        cout << "Enter the price per unit: $";
        cin >> item.price;

        cout << "Enter the quantity: ";
        cin >> item.quantity;

        double itemTotal = item.price * item.quantity;
        totalCost += itemTotal;

        cout << "Add more items? (y/n): ";
        cin >> addMore;

    } while (addMore == 'y' || addMore == 'Y');

    cout << "\n=== Bill ===\n";

    cout << "Product Information:\n";
    cout << "--------------------------------\n";

    do
    {
        Item item;

        cout << "Name: " << item.name << endl;
        cout << "Price: $" << item.price << endl;
        cout << "Quantity: " << item.quantity << endl;
        cout << "Total: $" << (item.price * item.quantity) << endl;
        cout << "--------------------------------\n";

        cout << "Add more products? (y/n): ";
        cin >> addMore;

    } while (addMore == 'y' || addMore == 'Y');

    cout << "Total Cost: $" << totalCost << endl;

    return 0;
}
