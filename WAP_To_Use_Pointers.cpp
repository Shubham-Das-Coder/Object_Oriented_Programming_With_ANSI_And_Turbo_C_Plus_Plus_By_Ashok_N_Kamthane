#include <iostream>

using namespace std;

int main()
{
    int x = 2, *p;
    cout << "\nAddress of x = " << (unsigned)&x;
    p = &x;
    cout << "\nValue of x = " << *p;
}