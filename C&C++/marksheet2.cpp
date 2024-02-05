#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <limits>

using namespace std;

class Student
{
public:
    string name;
    string rollNo;
    string fatherName;
    string enrollmentNo;
    string motherName;
    int marksBCA106;
    int marksBCA101;
    int marksBCA102;
    int marksBCA103;
    int marksBCA104;
    int marksBCA105;
    int marksBCA107;
    int marksBCA108;
    int marksBCA109;
    int marksBCA110;
    int internalMarksBCA106;
    int internalMarksBCA101;
    int internalMarksBCA102;
    int internalMarksBCA103;
    int internalMarksBCA104;
    int internalMarksBCA105;
    int internalMarksBCA107;
    int internalMarksBCA108;
    int internalMarksBCA109;
    int internalMarksBCA110;

    void inputDetails()
    {
        cout << "Enter Student's Name: ";
        getline(cin, name);

        cout << "Enter Roll Number: ";
        getline(cin, rollNo);

        cout << "Enter Father's Name: ";
        getline(cin, fatherName);

        cout << "Enter Enrollment Number: ";
        getline(cin, enrollmentNo);

        cout << "Enter Mother's Name: ";
        getline(cin, motherName);

        // theory marks
        inputSubjectMarks("BCA 106 ENVIRONMENTAL STUDIES (Theory)", marksBCA106);
        inputSubjectMarks("BCA 101 FUNDAMENTALS OF MATHEMATICS (Theory)", marksBCA101);
        inputSubjectMarks("BCA 102 PROGRAMMING WITH C (Theory)", marksBCA102);
        inputSubjectMarks("BCA 103 INTERNET TECHNOLOGY (Theory)", marksBCA103);
        inputSubjectMarks("BCA 104 FUNDAMENTALS OF COMPUTERS (Theory)", marksBCA104);
        inputSubjectMarks("BCA 105 DIGITAL LOGIC (Theory)", marksBCA105);
        // practical marks
        inputSubjectMarks("BCA 107 HTML LAB (Practical)", marksBCA107);
        inputSubjectMarks("BCA 108 C PROGRAMMING LAB (Practical)", marksBCA108);
        inputSubjectMarks("BCA 109 MS OFFICE LAB (Practical)", marksBCA109);
        inputSubjectMarks("BCA 110 DIGITAL ELECTRONICS LAB (Practical)", marksBCA110);
        // Internal marks theory practical subjects
        inputInternalMarks("BCA 106 ENVIRONMENTAL STUDIES (Internal)", internalMarksBCA106);
        inputInternalMarks("BCA 101 FUNDAMENTALS OF MATHEMATICS (Internal)", internalMarksBCA101);
        inputInternalMarks("BCA 102 PROGRAMMING WITH C (Internal)", internalMarksBCA102);
        inputInternalMarks("BCA 103 INTERNET TECHNOLOGY (Internal)", internalMarksBCA103);
        inputInternalMarks("BCA 104 FUNDAMENTALS OF COMPUTERS (Internal)", internalMarksBCA104);
        inputInternalMarks("BCA 105 DIGITAL LOGIC (Internal)", internalMarksBCA105);
        // Internal marks for practical subjects
        inputInternalMarks("BCA 107 HTML LAB (Internal)", internalMarksBCA107);
        inputInternalMarks("BCA 108 C PROGRAMMING LAB (Internal)", internalMarksBCA108);
        inputInternalMarks("BCA 109 MS OFFICE LAB (Internal)", internalMarksBCA109);
        inputInternalMarks("BCA 110 DIGITAL ELECTRONICS LAB (Internal)", internalMarksBCA110);
    }

    void generateMarkSheet()
    {
        int totalTheoryMarks = marksBCA101 + marksBCA102 + marksBCA103 + marksBCA104 + marksBCA105;
        int totalPracticalMarks = marksBCA107 + marksBCA108 + marksBCA109 + marksBCA110;
        int totalMarks = totalTheoryMarks + totalPracticalMarks;
        int ThtotalInternalMarks = internalMarksBCA101 + internalMarksBCA102 + internalMarksBCA103 +
                                   internalMarksBCA104 + internalMarksBCA105;
        int PTtotalInternalMarks = internalMarksBCA107 + internalMarksBCA108 + internalMarksBCA109 + internalMarksBCA110;
        int fullYearMarks = (totalTheoryMarks + ThtotalInternalMarks) + (totalPracticalMarks + PTtotalInternalMarks);

        cout << "\n\n\t\t\t\t\t\t\t\t    \033[1mJAI NARAIN VYAS UNIVERSITY, JODHPUR\033[0m";
        cout << "\n\t\t\t\t\t\t\t\t\033[1mB.C.A. FIRST YEAR Examination 2023 (REGULAR)\033[0m";
        cout << "\n\t\t\t\t\t\t\t\t\t   \033[1mPROVISIONAL MARKSHEET\033[0m";
        cout << "\n\033[1mCANDIDATE'S NAME:\033[0m " << name;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\033[1mROLL No.:\033[0m " << rollNo;
        cout << "\n\033[1mFATHER'S NAME:\033[0m " << fatherName;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\033[1mENROLLMENT No.:\033[0m " << enrollmentNo;
        cout << "\n\033[1mMOTHER'S NAME:\033[0m " << motherName << endl;

        printLine();
        // Display Subject-wise details
        cout << "\n\033[1mSUBJECTS\t\t\t\t\tMAX MKS.\tMIN MKS.\tTHEO. OBT.\tPRAC. OBT.\tINT. OBT.\tSUB TOTAL\t\tSTATUS\033[0m\n";
        printLine();
        displaySubjectDetails("BCA 106 ENVIRONMENTAL STUDIES (Theory)", 100, 35, marksBCA106, 0, internalMarksBCA106, marksBCA106 + internalMarksBCA106);
        cout << endl;
        displaySubjectDetails("BCA 101 FUNDAMENTALS OF MATHEMATICS (Theory)", 100, 35, marksBCA101, 0, internalMarksBCA101, marksBCA101 + internalMarksBCA101);
        displaySubjectDetails("BCA 102 PROGRAMMING WITH C (Theory)", 100, 35, marksBCA102, 0, internalMarksBCA102, marksBCA102 + internalMarksBCA102);
        displaySubjectDetails("BCA 103 INTERNET TECHNOLOGY (Theory)", 100, 35, marksBCA103, 0, internalMarksBCA103, marksBCA103 + internalMarksBCA103);
        displaySubjectDetails("BCA 104 FUNDAMENTALS OF COMPUTERS (Theory)", 100, 35, marksBCA104, 0, internalMarksBCA104, internalMarksBCA104);
        displaySubjectDetails("BCA 105 DIGITAL LOGIC (Theory)", 100, 35, marksBCA105, 0, internalMarksBCA105, internalMarksBCA105);

        cout << "\n\n\033[1mTHEORY TOTAL\t\t\t\t\t500\t\t175\t\t" << totalTheoryMarks << "\t\t\t\t" << ThtotalInternalMarks << "\t\t" << totalTheoryMarks + ThtotalInternalMarks << "\t\t\tS\033[0m";

        // Display Practical details
        displaySubjectDetails("BCA 107 HTML LAB (Practical)", 100, 40, 0, marksBCA107, internalMarksBCA107, marksBCA107 + internalMarksBCA107);
        displaySubjectDetails("BCA 108 C PROGRAMMING LAB (Practical)", 100, 40, 0, marksBCA108, internalMarksBCA108, marksBCA108 + internalMarksBCA108);
        displaySubjectDetails("BCA 109 MS OFFICE LAB (Practical)", 100, 40, 0, marksBCA109, internalMarksBCA109, marksBCA109 + internalMarksBCA109);
        displaySubjectDetails("BCA 110 DIGITAL ELECTRONICS LAB (Practical)", 100, 40, 0, marksBCA110, internalMarksBCA110, marksBCA110 + internalMarksBCA110);

        cout << "\n\n\033[1mPRACTICAL TOTAL\t\t\t\t\t400\t\t160\t\t\t\t" << totalPracticalMarks << "\t\t" << PTtotalInternalMarks << "\t\t" << totalPracticalMarks + PTtotalInternalMarks << "\t\t\tP\033[0m";
        cout << "\n\033[1mYEAR TOTAL :\t\t\t\t\t900\t\t360\t\t\t\t\t\t\t\t" << fullYearMarks << endl;

        // Check for failed subjects
        vector<string> failedSubjects;
        checkSubjectStatus("BCA 106 ", marksBCA106, 35, failedSubjects);
        checkSubjectStatus("BCA 101 ", marksBCA101, 35, failedSubjects);
        checkSubjectStatus("BCA 102 ", marksBCA102, 35, failedSubjects);
        checkSubjectStatus("BCA 103 ", marksBCA103, 35, failedSubjects);
        checkSubjectStatus("BCA 104 ", marksBCA104, 35, failedSubjects);
        checkSubjectStatus("BCA 105 ", marksBCA105, 35, failedSubjects);
        checkSubjectStatus("BCA 107 ", marksBCA107, 40, failedSubjects);
        checkSubjectStatus("BCA 108 ", marksBCA108, 40, failedSubjects);
        checkSubjectStatus("BCA 109 ", marksBCA109, 40, failedSubjects);
        checkSubjectStatus("BCA 110 ", marksBCA110, 40, failedSubjects);

        printLine();
        if (failedSubjects.empty())
        {
            cout << "\n\033[1mRESULT : PASS\033[0m\n";
        }
        else if (failedSubjects.size() > 3)
        {
            cout << "\n\033[1mRESULT : FAIL\033[0m\n";
        }
        else
        {
            cout << "\n\033[1mRESULT : DUE IN \033[0m ";
            for (const string &subject : failedSubjects)
            {
                cout << subject << " ";
            }
            cout << "\n";
        }

        printLine();
        cout << "\n\033[1mSkill Course : ANANDAM GRADE : A\033[0m" << endl;
        printLine();
        cout << "\n\033[1mRESULT DECLARE DATE : 00/01/2024\033[0m";
        cout << "\n\033[1mJODHPUR\033[0m";
        cout << "\n\033[1mCollege Of Study : (186) AISHWARYA COLLEGE OF EDUCATION (JODHPUR)\033[0m";
        cout << "\n\n\033[1mNote - This is a computer-generated mark sheet, doesn't require a signature.\033[0m\n";
    }

private:
    void displaySubjectDetails(const string &subject, int maxMks, int minMks, int theoObt, int pracObt, int internalMarks, int subTotal) const
    {
        string status = (theoObt + internalMarks >= minMks) ? "\033[1mPASS\033[0m" : "\033[1mFAIL\033[0m";
        cout << "\n"
             << left << setw(40) << subject << "\t" << maxMks << "\t\t" << minMks << "\t\t" << theoObt << "\t\t" << pracObt << "\t\t"
             << internalMarks << "\t\t" << subTotal << "\t\t\t" << status;
    }

    void checkSubjectStatus(const string &subject, int obtainedMarks, int passingMarks, vector<string> &failedSubjects) const
    {
        if (obtainedMarks < passingMarks)
        {
            failedSubjects.push_back(subject);
        }
    }

    void inputSubjectMarks(const string &subject, int &marks)
    {
        cout << "Enter Marks for " << subject << ": ";
        cin >> marks;
    }

    void inputInternalMarks(const string &subject, int &internalMarks)
    {
        cout << "Enter Internal Marks for " << subject << ": ";
        cin >> internalMarks;
    }

    void printLine()
    {
        cout << "--------------------------------------------------------------------------------------------------------------------------------------------------------------------------";
    }
};

int main()
{
    const int numStudents = 1;
    Student students[numStudents];

    for (int i = 0; i < numStudents; ++i)
    {
        cout << "\nEnter details for Student " << i + 1 << ":\n";
        students[i].inputDetails();
        students[i].generateMarkSheet();
    }

    return 0;
}
