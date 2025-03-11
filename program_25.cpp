//Read the details and print the details of book using class
#include<iostream>
using namespace;
class book{
  int BookID;
  string Book_Name;
  float Book_Price;
  int Total_Cost;
public:
void read()
void details()
void total_cost()
};

void book::read()
{
  cout<<"Enter the BookID"<<"Book_Name"<<"Book_Price";
  cin>>BookID>>Book_Name>>Book_Price;
}
void book::details()
{
  cout<<"BookID"<<BookID<<"Book_Name"<<Book_Name<<"Book_price"<<Book_Price";
}

int book::total_cost(){
  int nos;
  cout<<"Enter No of copies needed"";
  cin>>nos;
  total_cost= Book_Price*nos;
  return total_cost;
}

int main(){
 book b[3];
  
  return 0;
}
