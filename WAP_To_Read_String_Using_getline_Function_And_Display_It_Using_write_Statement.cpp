#include <iostream>
#include <string.h>
#include <conio.h>

using namespace std;

main()
{
    char x[30];
    cout << "\nEnter any string : ";
    cin.getline(x, 30);
    cout << "\nEntered string : " << x;
    cout << "\nEntered string : ";
    cout.write(x, 30);
    cout << "\nEntered string : ";
    cout.write(x, strlen(x));

    return 0;
}