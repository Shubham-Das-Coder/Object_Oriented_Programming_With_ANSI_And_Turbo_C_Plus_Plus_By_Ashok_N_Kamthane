#include <iostream>

using namespace std;

struct item
{
private: // private section starts
    int codeno;
    float price;
    int qty;

public:         // public section starts
    void show() // member function
    {
        codeno = 125; // access to private members
        price = 195;
        qty = 200;

        cout << "\nCodeno = " << codeno;
        cout << "\nPrice = " << price;
        cout << "\nQuantity = " << qty;
    }
};

int main()
{
    item one;   // object declaration
    one.show(); // call to member function

    return 0;
}