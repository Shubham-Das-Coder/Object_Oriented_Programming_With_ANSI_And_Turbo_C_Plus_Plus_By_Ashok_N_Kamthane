#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char *name = "C Plus Plus";

    cout << *&(name) << "\n";
    cout << &(*name) << "\n";
    cout << *&name << "\n";
}