#include <iostream>
using namespace std;
inline float circle(float a)
{
  return 3.14 * a;
}
inline int square(int a)
{
  return a * a;
}
inline int rectangle(int a, int b)
{
  return a * b;
}
inline int triangle(int a, int b)
{
  return 0.5 * (a * b);
}

int main()
{
  int op;
  cout << "Enter your desired operation \n 1.Circle \n 2.Square \n 3.Rectangle \n 4.Triangle \n";
  cin >> op;
  switch (op)
  {
  case 1:
  {
    float c;
    cout << "Enter the radius of the circle : ";
    cin >> c;
    cout << circle(c);
  }
  break;
  case 2:
  {
    int sq;
    cout << "Enter the side of the square : ";
    cin >> sq;
    cout << square(sq);
  }
  break;
  case 3:
  {
    int s1, s2;
    cout << "Enter the two sides of the rectangle : ";
    cin >> s1 >> s2;
    cout << rectangle(s1, s2);
  }
  case 4:
  {
    int s1, s2;
    cout << "Enter the base and height of the Triangle : ";
    cin >> s1 >> s2;
    cout << triangle(s1, s2);
  }
  break;
  default:
    cout << "Invalid input";
  }
  return 0;
}
