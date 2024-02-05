#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Student
{
    string name;
    int rollNumber;
    char grade;
};

int main()
{
    vector<Student> students;

    // Input student information
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i)
    {
        Student student;
        cout << "Student " << i + 1 << " Name: ";
        cin.ignore();
        getline(cin, student.name);
        cout << "Student " << i + 1 << " Roll Number: ";
        cin >> student.rollNumber;
        cout << "Student " << i + 1 << " Grade: ";
        cin >> student.grade;
        students.push_back(student);
    }

    // Display student information
    cout << "\nStudent Information:\n";
    cout << "-----------------------------------\n";
    cout << "Name\t\tRoll Number\tGrade\n";
    cout << "-----------------------------------\n";

    for (const Student &student : students)
    {
        cout << student.name << "\t\t" << student.rollNumber << "\t\t" << student.grade << "\n";
    }

    return 0;
}
