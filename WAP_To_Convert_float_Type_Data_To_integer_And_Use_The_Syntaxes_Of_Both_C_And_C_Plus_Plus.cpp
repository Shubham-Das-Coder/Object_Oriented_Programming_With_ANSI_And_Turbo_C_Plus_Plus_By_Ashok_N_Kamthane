#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    float x, y;
    a = 19;
    b = 10;
    c = 3;
    x = (float)a / c;
    printf("\nx = %f", x);
    y = float(b) / c;
    cout << "\ny = " << y;
}