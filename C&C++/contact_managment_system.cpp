#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

string toLowerCase(const string &input)
{
    string result = input;
    transform(result.begin(), result.end(), result.begin(), ::tolower);
    return result;
}

class Contact
{
public:
    string name;
    string phoneNumber;

    Contact(const string &n, const string &phone) : name(n), phoneNumber(phone) {}
};

class ContactManager
{
private:
    vector<Contact> contacts;

public:
    void addContact(const string &name, const string &phoneNumber)
    {
        Contact newContact(name, phoneNumber);
        contacts.push_back(newContact);
        cout << "Contact added successfully.\n";
        system("pause");
    }

    void displayContacts()
    {
        if (contacts.empty())
        {
            cout << "No contacts available.\n";
            system("pause");
            return;
        }

        cout << "Contacts:\n";
        for (const auto &contact : contacts)
        {
            cout << "Name: " << contact.name << "\tPhone: " << contact.phoneNumber << "\n";
        }
        system("pause");
    }

    void searchContact(const string &name)
    {
        for (const auto &contact : contacts)
        {
            if (toLowerCase(contact.name) == toLowerCase(name))
            {
                cout << "Contact found:\n";
                cout << "Name: " << contact.name << "\tPhone: " << contact.phoneNumber << "\n";
                system("pause");
                return; // Contact found, exit the function
            }
        }

        cout << "Contact not found.\n";
        system("pause");
    }
};

int main()
{
    ContactManager contactManager;

    char choice;
    do
    {
        system("cls");
        cout << "\nMenu:\n";
        cout << "1. Add Contact\n";
        cout << "2. Display Contacts\n";
        cout << "3. Search Contact\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case '1':
        {
            string name, phone;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter phone number: ";
            cin >> phone;
            contactManager.addContact(name, phone);
            break;
        }
        case '2':
            contactManager.displayContacts();
            break;
        case '3':
        {
            string name;
            cout << "Enter name to search: ";
            cin >> name;
            contactManager.searchContact(name);
            break;
        }
        case '4':
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
            system("pause");
            system("cls");
        }
    } while (choice != '4');

    return 0;
}
