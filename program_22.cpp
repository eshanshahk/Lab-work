#include<iostream>
using namespace std;
float circle(float a)
{
  return 3.14*a;
}
int circle(int a)
{
  return a*a;
}
int circle(int a,int b)
{
  return a*b;
}

int main()
{
  int op;
  cout<<"Enter your desired operation \n 1.Circle \n 2.Square \n 3.Rectangle \n";
  cin>>op;
  switch(op)
   { 
   	case 1:{
            float c;
            cout<<"Enter the radius of the circle : ";
            cin>>c;
            cout<<circle(c);
            }break;
        case 2:{
            int sq;
            cout<<"Enter the side of the square : ";
            cin>>sq;
            cout<<circle(sq);
            }break;
        case 3:{
            int s1,s2;
            cout<<"Enter the two sides of the rectangle : ";
            cin>>s1>>s2;
            cout<<circle(s1,s2);
            }break;
   	default:cout<<"Invalid input";
    }
  return 0;
}
