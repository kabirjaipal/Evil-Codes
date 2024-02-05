#include <iostream>
#include <string>
using namespace std;

const int NUM_STUDENTS = 1;

class Marksheet
{
private:
    string studentName;
    int rollNumber;
    float marks[5]; // Assuming 5 subjects

public:
    void inputDetails()
    {
        cout << "Enter student name: ";
        getline(cin, studentName);

        cout << "Enter roll number: ";
        cin >> rollNumber;

        cout << "Enter marks for 5 subjects:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void calculatePercentage()
    {
        float total = 0;
        for (int i = 0; i < 5; i++)
        {
            total += marks[i];
        }

        float percentage = (total / 5);
        cout << "Total Marks: " << total << "\n";
        cout << "Percentage: " << percentage << "%\n";
    }

    void displayMarksheet()
    {
        cout << "Student Name: " << studentName << "\n";
        cout << "Roll Number: " << rollNumber << "\n";

        cout << "Subject-wise Marks:\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Subject " << i + 1 << ": " << marks[i] << "\n";
        }

        calculatePercentage();
    }
};

int main()
{
    Marksheet marksheet[NUM_STUDENTS]; // An array of NUM_STUDENTS Marksheet objects

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "Enter details for Student " << i + 1 << ":\n";
        marksheet[i].inputDetails();
    }

    for (int i = 0; i < NUM_STUDENTS; i++)
    {
        cout << "\nMarksheet for Student " << i + 1 << ":\n";
        marksheet[i].displayMarksheet();
        cout << "=======================================\n";
    }

    return 0;
}
