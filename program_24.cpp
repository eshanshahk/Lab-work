//Program 24 : Read and print the details of a book using class
#include<iostream>
using namespace std;
class car{
public:
  string brand;
  int model;
  int year;
void inputdetails()
{
  cout<<"Enter Brand Name : ";
  cin>>brand;
  cout<<"Enter the Model : ";
  cin>>model;
  cout<<"Enter the Year : ";
  cin>>year;
}
void display()
{
  cout<<"brand= "<<brand<<" model= "<<model<<" year= "<<year;
}
};

int main(){
  car b1;
  b1.inputdetails();
  b1.display();
  return 0;
}
