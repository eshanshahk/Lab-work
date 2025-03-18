// Online Shopping Billing System Demonstrating Multiple Inheritance

#include <iostream>
#include <string>
using namespace std;

class OnlineShopping
{
protected:
    string itemName;
    int quantity;
    float unitPrice;

public:
    void getItemDetails()
    {
        cout << "Enter Item Name: ";
        cin >> itemName;
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Unit Price: ";
        cin >> unitPrice;
    }

    void displayItemDetails()
    {
        cout << "Item: " << itemName << ", Quantity: " << quantity << ", Unit Price: Rs. " << unitPrice << endl;
    }

    float calculateItemCost()
    {
        return quantity * unitPrice;
    }
};

class ShippingDetails
{
protected:
    float shippingCharge;

public:
    void getShippingCharge()
    {
        cout << "Enter Shipping Charge: ";
        cin >> shippingCharge;
    }

    void displayShippingCharge()
    {
        cout << "Shipping Charge: Rs. " << shippingCharge << endl;
    }
};

class Bill : public OnlineShopping, public ShippingDetails
{
public:
    void calculateTotalBill()
    {
        float total = calculateItemCost() + shippingCharge;
        cout << "Total Bill Amount: Rs. " << total << endl;
    }
};

int main()
{
    Bill myBill;

    myBill.getItemDetails();
    myBill.getShippingCharge();

    cout << "\n--- Bill Details ---\n";
    myBill.displayItemDetails();
    myBill.displayShippingCharge();

    myBill.calculateTotalBill();

    return 0;
}
