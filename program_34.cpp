#include <iostream>
using namespace std;

class Shape
{
public:
    virtual double calculateArea() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) { radius = r; }
    double calculateArea() { return 3.14 * radius * radius; }
};

class Square : public Shape
{
private:
    double side;

public:
    Square(double s) { side = s; }
    double calculateArea() { return side * side; }
};

int main()
{
    int r, s;
    Shape *shapes[3];

    cout << "Enter the radius of the first circle: ";
    cin >> r;
    shapes[0] = new Circle(r);

    cout << "Enter the side of the square: ";
    cin >> s;
    shapes[1] = new Square(s);

    cout << "Enter the radius of the second circle: ";
    cin >> r;
    shapes[2] = new Circle(r);

    for (int i = 0; i < 3; ++i)
    {
        cout << "Area of shape " << i + 1 << ": " << shapes[i]->calculateArea() << endl;
        delete shapes[i];
    }
    return 0;
}
