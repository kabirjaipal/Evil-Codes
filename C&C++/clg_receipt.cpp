#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Aishwarya College Fee Receipt" << endl;
    cout << "------------------------------------" << endl;

    string studentName, rollNumber, phoneNumber, course;
    double feeAmount;

    cout << "Enter student's name: ";
    getline(cin, studentName);
    cout << "Enter Roll number: ";
    getline(cin, rollNumber);
    cout << "Enter student's phone number: ";
    getline(cin, phoneNumber);
    cout << "Enter the course name: ";
    getline(cin, course);
    cout << "Enter fee amount: $";
    cin >> feeAmount;

    system("cls");
    cout << "\n\nAishwarya College Fee Receipt" << endl;
    cout << "------------------------------------" << endl;
    cout << "Student Name: " << studentName << endl;
    cout << "Roll Number: " << rollNumber << endl;
    cout << "Phone Number: " << phoneNumber << endl;
    cout << "Course: " << course << endl;
    cout << "Date: " << __DATE__ << endl;
    cout << "------------------------------------" << endl;
    cout << "Fee Amount: $" << feeAmount << endl;
    cout << "------------------------------------" << endl;
    cout << "Thank you for your payment!" << endl;

    return 0;
}
