// Polygon Area Calculation Using Virtual Functions

#include <iostream>
using namespace std;

class Polygon
{
protected:
    int width, height;

public:
    void setValues(int a, int b)
    {
        width = a;
        height = b;
    }
    virtual int area()
    {
        cout << "Base Area";
        return 0;
    }
};

class Rectangle : public Polygon
{
public:
    int area()
    {
        return width * height;
    }
};

class Triangle : public Polygon
{
public:
    int area()
    {
        return (width * height / 2);
    }
};

int main()
{
    int a, b;
    Rectangle rect;
    Triangle trgl;
    Polygon *ppoly1 = &rect;

    cout << "Enter the width and height: ";
    cin >> a >> b;
    ppoly1->setValues(a, b);

    cout << "Area of the Rectangle: ";
    cout << ppoly1->area() << '\n';

    cout << "Area of the Triangle: ";
    ppoly1 = &trgl;
    ppoly1->setValues(a, b);
    cout << ppoly1->area() << '\n';

    return 0;
}
