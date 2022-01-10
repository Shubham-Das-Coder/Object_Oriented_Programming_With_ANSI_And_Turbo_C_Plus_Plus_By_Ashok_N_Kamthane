#include <iostream>

using namespace std;

struct item
{
private: // private section starts
    int codeno;
    float price;
    int qty;

    void values() // private member function
    {
        codeno = 125;
        price = 195;
        qty = 200;
    }

public:         // public section starts
    void show() // public section starts
    {
        values(); // call to private member functions

        cout << "\nCodeno = " << codeno;
        cout << "\nPrice = " << price;
        cout << "\nQuantity = " << qty;
    }
};

int main()
{
    item one; // object declaration

    // one.values(); is not accessible

    one.show(); // call to pubic member function
    return 0;
}