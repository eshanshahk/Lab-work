#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double bal)
    {
        accountNumber = accNum;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited Rs. " << amount << ". New Balance: Rs. " << balance << endl;
    }

    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn Rs. " << amount << ". Remaining Balance: Rs. " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance! Withdrawal failed." << endl;
        }
    }

    void display()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: Rs. " << balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount(int accNum, double bal, double rate) : BankAccount(accNum, bal)
    {
        interestRate = rate;
    }

    void calculateInterest()
    {
        double interest = (balance * interestRate) / 100;
        cout << "Interest Earned: Rs. " << interest << endl;
        balance += interest;
        cout << "New Balance after Interest: Rs. " << balance << endl;
    }
};

class CurrentAccount : public BankAccount
{
private:
    double minBalance;
    double serviceCharge;

public:
    CurrentAccount(int accNum, double bal, double minBal, double charge)
        : BankAccount(accNum, bal)
    {
        minBalance = minBal;
        serviceCharge = charge;
    }

    void applyServiceCharge()
    {
        if (balance < minBalance)
        {
            cout << "Balance below minimum! Service charge of Rs. " << serviceCharge << " applied." << endl;
            balance -= serviceCharge;
        }
        else
        {
            cout << "No service charge applied. Balance is sufficient." << endl;
        }
        cout << "Updated Balance: Rs. " << balance << endl;
    }
};

int main()
{
    cout << "Savings Account Operations:" << endl;
    SavingsAccount sa(101, 5000, 5.0);
    sa.display();
    sa.deposit(2000);
    sa.calculateInterest();
    sa.withdraw(1000);
    sa.display();

    cout << "\n-------------------------------\n"
         << endl;

    cout << "Current Account Operations:" << endl;
    CurrentAccount ca(102, 3000, 5000, 200);
    ca.display();
    ca.withdraw(500);
    ca.applyServiceCharge();
    ca.deposit(3000);
    ca.applyServiceCharge();
    ca.display();

    return 0;
}
