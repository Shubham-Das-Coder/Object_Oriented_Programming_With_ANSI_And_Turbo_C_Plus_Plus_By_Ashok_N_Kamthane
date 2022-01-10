#include <iostream>

using namespace std;

class item
{
private:        // private section starts
    int codeno; // member data variables
    float price;
    int qty;

public:              // public section starts
    void show(void); // prototype declaration
};                   // end of class

inline void item ::show() // outside inline function
{
    codeno = 213;
    price = 2022;
    qty = 150;
    cout << "\nCodeno = " << codeno;
    cout << "\nPrice = " << price;
    cout << "\nQuantity = " << qty;
}

int main()
{
    item one;   // object declaration
    one.show(); // call to public member function (inline)
    return 0;
}