#include <iostream>

using namespace std;

class item
{
private:        // private section starts
    int codeno; // member data variables
    float price;
    int qty;

public:              // public section starts
    void show(void); // prototype declration
};                   // end of class

void item::show() // definition outside the class
{
    codeno = 101;
    price = 2342;
    qty = 122;

    cout << "\nCodeno : " << codeno;
    cout << "\nPrice : " << price;
    cout << "\nQuantity : " << qty;
}

int main()
{
    item one;   // object declaration
    one.show(); // call to public member function

    return 0;
}