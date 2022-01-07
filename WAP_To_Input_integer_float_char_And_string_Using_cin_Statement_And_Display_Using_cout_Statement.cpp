#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int x;
    float y;
    char z;
    char city[15];
    cout << "\nEnter integer, float and char : ";
    cin >> x >> y >> z;
    cout << "\nEnter a string : ";
    cin >> city;
    cout << "x = " << x << " y = " << y << " z = " << z << endl;
    cout << "City = " << city;
}