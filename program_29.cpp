#include <iostream>
#include <string>

using namespace std;

class person
{
    string name;
    int age;

public:
    void details()
    {
        cout << "Enter name :";
        cin >> name;
        cout << "Enter age :";
        cin >> age;
    }

    void display()
    {
        cout << "Name \t" << name << "\t Age \t" << age;
    }
};

class student : public person
{
    int rollno;

public:
    void rdetail()
    {
        details();
        cout << "Enter roll no :";
        cin >> rollno;
    }
    void rdisplay()
    {
        display();
        cout << "\t Roll no :" << rollno;
    }
};

int main()
{
    student s;
    s.rdetail();
    s.rdisplay();
    return 0;
}
