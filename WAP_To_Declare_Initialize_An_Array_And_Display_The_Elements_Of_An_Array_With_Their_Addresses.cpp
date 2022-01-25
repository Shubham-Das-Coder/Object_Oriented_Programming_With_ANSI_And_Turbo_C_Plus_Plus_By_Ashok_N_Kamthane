#include <iostream>

using namespace std;

int main()
{
    int b[4] = {2, 4, 3, 7};

    cout << "b[0]  Value = " << b[0] << "  Address : " << (unsigned)&b[0] << endl;
    cout << "b[1]  Value = " << b[1] << "  Address : " << (unsigned)&b[1] << endl;
    cout << "b[2]  Value = " << b[2] << "  Address : " << (unsigned)&b[2] << endl;
    cout << "b[3]  Value = " << b[3] << "  Address : " << (unsigned)&b[3] << endl;
}