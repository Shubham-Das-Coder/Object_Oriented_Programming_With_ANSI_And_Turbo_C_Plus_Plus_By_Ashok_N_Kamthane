#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char name[15];
    cout << "Enter Your Name : ";
    cin >> name;
    int len = strlen(name);
    cout << "The length of the string is : " << len;
    return 0;
}