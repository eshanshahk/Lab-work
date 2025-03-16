/*Write a program to define a class Book with the private members : BookID, BookName,
BookPrice and total_cost() to calculate total cost for n number of copies where n is passed as an
argument. Write public members
To input book details .
Display book details .
To input no. of copies required and display Total cost to be paid .
Create 3 Book objects and calculate Total cost to be paid for each purchase.
 */
#include <iostream>
using namespace std;
class book
{
  int BookID;
  string Book_Name;
  float Book_Price;
  int Total_Cost;

public:
  void read();
  void details();
  int total_cost(int);
};

void book::read()
{
  cout << "Enter the BookID \n"
       << "Book_Name \n"
       << "Book_Price \n";
  cin >> BookID >> Book_Name >> Book_Price;
}
void book::details()
{
  cout << "BookID \t"
       << BookID << "\t" << "Book_Name \t"
       << Book_Name << "\t" << "Book_price \t"
       << Book_Price << "\t";
}
int book::total_cost(int nos)
{
  Total_Cost = Book_Price * nos;
  cout << " \n Total cost =" << Total_Cost << "\n";
  return Total_Cost;
}

int main()
{
  book b[3];
  int nos;
  for (int i = 0; i < 3; i++)
  {
    b[i].read();
  }
  for (int i = 0; i < 3; i++)
  {
    b[i].details();
    cout << "Enter No of copies needed";
    cin >> nos;
    b[i].total_cost(nos);
  }

  return 0;
}
