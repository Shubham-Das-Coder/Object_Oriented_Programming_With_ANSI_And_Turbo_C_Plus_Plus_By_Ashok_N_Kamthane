#include <iostream>

using namespace std;

class item
{
public: // public section begins
    int codeno;
    float prize;
    int qty;
}; // end of class

int main()
{
    item one;         // object declaration
    one.codeno = 123; // member initialization
    one.prize = 123.45;
    one.qty = 150;

    cout << "\nCodeno : " << one.codeno;
    cout << "\nPrize : " << one.prize;
    cout << "\nQuantity : " << one.qty;

    return 0;
}