/*Write a program to create a Rectangle class with two private data members: length and width.
Create a default constructor that initialises both members to 0 and a parameterised constructor.
Create two different objects of class Rectangle using these different types of constructors and
display their values using a member function. Write a destructor that prints a message
when an object is destroyed.*/

#include <iostream>
using namespace std;

class Rectangle
{
    int length;
    int width;

public:
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void display()
    {
        cout << "\nLength : " << length << "\nWidth : " << width;
    }
    ~Rectangle()
    {
        cout << "\nDestruction executed";
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(10, 10);

    cout << "\nDisplaying value at r1";
    r1.display();

    cout << "\nDisplaying value at r2";
    r2.display();

    return 0;
}