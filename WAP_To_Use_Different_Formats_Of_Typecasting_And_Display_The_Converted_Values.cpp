#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i = 66;
    float f = 2.5;
    double d = 85.22;
    char c = 'K';

    cout << "\nint in char format : " << (char)i;
    cout << "\nfloat in int format : " << (int)f;
    cout << "\ndouble in char format : " << (char)d;
    cout << "\nchar in int format : " << (int)c;
}