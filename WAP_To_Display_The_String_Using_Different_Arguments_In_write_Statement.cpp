#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

main()
{
    char a, x[30];
    cout << "\nEnter any string : ";
    cin.getline(x, 30);
    cout << "\nEntered string : \n";
    for (a = 0; a <= strlen(x); a++)
    {
        cout << "\n";
        cout.write(x, a);
    }
    return 0;
}