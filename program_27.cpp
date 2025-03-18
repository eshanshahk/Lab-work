// C++ program to illustrate the use of unary operator overloading, increment ++ operator overloading

#include <iostream>
using namespace std;

class Counter
{
    int value;

public:
    Counter() : value(0) {}
    Counter(int v) : value(v) {}

    void display()
    {
        cout << "Value: " << value << endl;
    }

    Counter operator++()
    {
        ++value;
        return *this;
    }

    Counter operator++(int)
    {
        Counter temp = *this;
        value++;
        return temp;
    }
};

int main()
{
    Counter c1(5);
    cout << "Original value: ";
    c1.display();

    ++c1;
    cout << "After prefix increment: ";
    c1.display();

    c1++;
    cout << "After postfix increment: ";
    c1.display();

    return 0;
}
