#include<stdio.h>
#include<iostream>
using namespace std;
class car{
public:
  char brand;
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
  cout<<"brand"<<brand<<"model"<<model<<"year"<<year;
}

int main(){
  int b1;
  b1.inputdetails();
  b1.dispaly();
  return 0;
}
