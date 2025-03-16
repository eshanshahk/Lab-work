/*Write a program to define a class Time having private members
hours, minutes and seconds. Write member functions
1.	To input values to data members
2.	To display Time in Hour:minute:second format.
3.	To find sum of two Time objects using friend function.
*/

#include <iostream>
using namespace std;

class Time
{
    int hours, minutes, seconds;

public:
    void timenow()
    {
        cout << "Hours now : ";
        cin >> hours;
        cout << "Minutes now : ";
        cin >> minutes;
        cout << "Seconds now : ";
        cin >> seconds;
    }
    void timeprint()
    {
        cout << hours << " hour \t";
        cout << minutes << " minute \t";
        cout << seconds << " seconds \t";
    }
};

int main()
{
    Time t;
    t.timenow();
    t.timeprint();
}