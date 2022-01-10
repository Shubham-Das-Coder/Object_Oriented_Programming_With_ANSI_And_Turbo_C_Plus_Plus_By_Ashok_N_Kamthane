#include <iostream>

using namespace std;

class access
{
private:
    int p;

    void getp()
    {
        cout << "In pget() enter value of p : ";
        cin >> p;
    }

public:
    int h;

    void geth()
    {
        cout << "In geth() : " << endl;
        getp();
        getm();

        cout << "p = " << p << "  h = " << h << "  m = " << m;
    }

protected:
    int m;
    void getm()
    {
        cout << "In mget() enter value of m : ";
        cin >> m;
    }
};

main()
{
    access a; // object declaration
    // a.p=2; //access to private member is not possible
    // a.pget() //______"______
    // a.m=5; //access to protected member is not possible
    // a.mget() //______"______
    a.h = 4; // direct access to public member is possible
    a.geth();
}