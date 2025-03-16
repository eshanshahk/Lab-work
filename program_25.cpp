#include <iostream>
#include <string>
using namespace std;

class bill
{
private:
	string name;
	string address;
	int tellno, nos;

public:
	void details()
	{
		cout << "Enter your name : ";
		cin >> name;
		cout << "Enter your address : ";
		cin >> address;
		cout << "Enter you telephone no : ";
		cin >> tellno;
		cout << "Enter no of calls : ";
		cin >> nos;
	}
	friend void payment(bill);
};
void payment(bill b)
{
	int amount = b.nos * 2;
	cout << "NAME : " << b.name;
	cout << "\n ADDRESS :" << b.address;
	cout << "\n Telephone No :" << b.tellno;
	cout << "\n Amount :" << amount;
}
int main()
{
	bill b;
	b.details();
	payment(b);
	return 0;
}
