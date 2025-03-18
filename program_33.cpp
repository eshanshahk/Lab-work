// Student Result Calculation

#include <iostream>
#include <string>
using namespace std;

class Student
{
protected:
    string Name;
    int Rollno;
    string Course;

public:
    void getStudentDetails()
    {
        cout << "Enter Name: ";
        cin >> Name;
        cout << "Enter Roll Number: ";
        cin >> Rollno;
        cout << "Enter Course: ";
        cin >> Course;
    }
    void displayStudentDetails()
    {
        cout << "Name: " << Name << "\nRoll Number: " << Rollno << "\nCourse: " << Course << endl;
    }
};

class Test : virtual public Student
{
protected:
    int marks[3];

public:
    void getMarks()
    {
        cout << "Enter marks for 3 subjects: ";
        for (int i = 0; i < 3; i++)
            cin >> marks[i];
    }
    int getTotalMarks()
    {
        return marks[0] + marks[1] + marks[2];
    }
    void displayMarks()
    {
        cout << "Marks in 3 subjects: ";
        for (int i = 0; i < 3; i++)
            cout << marks[i] << " ";
        cout << endl;
    }
};

class GraceMarks : virtual public Student
{
protected:
    int BonusMark;

public:
    void getBonusMarks()
    {
        cout << "Enter Bonus Marks: ";
        cin >> BonusMark;
    }
    int getBonus()
    {
        return BonusMark;
    }
    void displayBonusMarks()
    {
        cout << "Bonus Marks: " << BonusMark << endl;
    }
};

class Result : public Test, public GraceMarks
{
public:
    void displayResult()
    {
        displayStudentDetails();
        displayMarks();
        displayBonusMarks();
        int total = getTotalMarks() + getBonus();
        cout << "Total Marks (Including Bonus): " << total << endl;
    }
};

int main()
{
    Result r;
    r.getStudentDetails();
    r.getMarks();
    r.getBonusMarks();
    r.displayResult();
    return 0;
}
