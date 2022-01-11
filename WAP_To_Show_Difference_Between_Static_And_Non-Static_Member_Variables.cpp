#include <iostream>

using namespace std;

class number
{
    static int c; // static variable
    int k;        // non-static variable

public:
    void zero()
    {
        k = 0;
    }
    void count()
    {
        ++c;
        ++k;

        cout << "\nValue of c = " << c << "\tAddress of c= " << (unsigned)&c;
        cout << "\nValue of k = " << k << "\tAddress of k= " << (unsigned)&k;
    }
};

int number ::c = 0; // initialization of static member variables

int main()
{
    number A, B, C;

    A.zero();
    B.zero();
    C.zero();

    A.count();
    B.count();
    C.count();

    return 0;
}