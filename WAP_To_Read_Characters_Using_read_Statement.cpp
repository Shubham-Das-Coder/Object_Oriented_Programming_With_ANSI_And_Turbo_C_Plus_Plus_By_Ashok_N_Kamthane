#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char name[20];
    cout << "\nEnter a string : ";
    cin.read(name, 20);
    cout << endl;
    cout.write(name, 20);
}