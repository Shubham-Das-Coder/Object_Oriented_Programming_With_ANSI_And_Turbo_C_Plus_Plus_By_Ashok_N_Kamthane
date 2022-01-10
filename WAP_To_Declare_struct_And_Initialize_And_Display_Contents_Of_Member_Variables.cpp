#include <iostream>
#include <strstream>

using namespace std;

struct item // struct declaration
{
    int codeno;
    float prize;
    int qty;
};

main()
{
    item a, *b; // object declaration

    a.codeno = 123; // direct access & initialization of member variables
    a.prize = 150.75;
    a.qty = 150;

    cout << "\nWith simple variable";
    cout << "\nCodeno : " << a.codeno;
    cout << "\nPrize : " << a.prize;
    cout << "\nQty : " << a.qty;

    b->codeno = 124; // direct access & initialization of member variables
    b->prize = 200.75;
    b->qty = 75;

    cout << "\n\nWith pointer to structure";
    cout << "\nCodeno : " << b->codeno;
    cout << "\nPrize : " << b->prize;
    cout << "\nQty : " << b->qty;
}