#include <iostream>

using namespace std;

// PUBLIC DERIVATION
class A // BASE CLASS
{
public:
    int x;
};

class B : public A // DERIVED CLASS
{
public:
    int y;
};

int main()
{
    B b; // DECLARATION OF OBJECT
    b.x = 20;
    b.y = 30;

    cout << "\nMember of A : " << b.x;
    cout << "\nMember of B : " << b.y;
}