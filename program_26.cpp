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
        cout << "Enter Hours: ";
        cin >> hours;
        cout << "Enter Minutes: ";
        cin >> minutes;
        cout << "Enter Seconds: ";
        cin >> seconds;
    }

    void timeprint()
    {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    friend Time sumTime(Time, Time);
};

Time sumTime(Time t1, Time t2)
{
    Time t3;
    t3.seconds = t1.seconds + t2.seconds;
    t3.minutes = t1.minutes + t2.minutes + (t3.seconds / 60);
    t3.seconds %= 60;
    t3.hours = t1.hours + t2.hours + (t3.minutes / 60);
    t3.minutes %= 60;
    return t3;
}

int main()
{
    Time t1, t2, t3;
    cout << "Enter first time:\n";
    t1.timenow();
    cout << "Enter second time:\n";
    t2.timenow();

    t3 = sumTime(t1, t2);

    cout << "Sum of times: ";
    t3.timeprint();
    return 0;
}
