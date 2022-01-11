#include <iostream>
#include <conio.h>

using namespace std;

class bita
{
private:
    static int c;

public:
    static void count() { c++; }

    static void display()
    {
        cout << "\nValue of c : " << c;
    }
};

int bita ::c = 0;

main()
{
    bita::display();
    bita::count();
    bita::count();
    bita::display();
}