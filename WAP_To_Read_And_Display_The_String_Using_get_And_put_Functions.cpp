#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char j = 0;
    char x[20];
    cout << "\nEnter a string : ";

    while (x[j++] != '\n')
        cin.get(x[j]);
    j = 0;
    cout << "\nEntered string : ";
    while (x[j++] != '\n')
        cout.put(x[j]);
    j = 0;
}