#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x = 77;
    float y = 5.1252;
    int z = 78;

    cout << "Address of x = " << &x << endl;
    cout << "Address of y = " << &y << endl;
    cout << "Address of z = " << (unsigned)&z << endl;
}