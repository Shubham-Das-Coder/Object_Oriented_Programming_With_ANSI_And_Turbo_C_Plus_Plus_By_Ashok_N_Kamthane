#include <iostream>

using namespace std;

class data
{
    long i; // By default private
    float f;
    char c;
};

int main()
{
    data d1, d2;
    cout << endl
         << "Size of object d1 = " << sizeof(d1);
    cout << endl
         << "Size of object d2 = " << sizeof(d2);
    cout << endl
         << "Size of class = " << sizeof(data);
    return 0;
}