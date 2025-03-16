#include <iostream>
using namespace std;
class car
{
public:
    string brand;
    int model;
    int year;
    void inputdetails()
    {
        cout << "Enter Brand Name : ";
        cin >> brand;
        cout << "Enter the Model : ";
        cin >> model;
        cout << "Enter the Year : ";
        cin >> year;
    }
    void display()
    {
        cout << "\nbrand= " << brand << "\nmodel= " << model << "\nyear= " << year;
    }
};

int main()
{
    car b1[3];
    for (int i = 0; i < 3; i++)
    {
        b1[i].inputdetails();
    }
    for (int i = 0; i < 3; i++)
    {
        b1[i].display();
    }
    return 0;
}
