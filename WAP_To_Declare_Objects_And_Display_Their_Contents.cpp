#include <iostream>

using namespace std;

class month
{
public:
    char *name;
    int days;
}; // end of class

int main()
{
    month M1, M3; // object declaration
    M1.name = "January";
    M1.days = 31;
    M3.name = "March";
    M3.days = 31;

    cout << "\nObject M1";
    cout << "\nMonth name : " << M1.name << "\tAddress : " << (unsigned)&M1.name;
    cout << "\nDays : " << M1.days << "\t\tAddress : " << (unsigned)&M1.days;

    cout << "\n\nObject M3";
    cout << "\nMonth name : " << M3.name << "\tAddress : " << (unsigned)&M3.name;
    cout << "\nDays : " << M3.days << "\t\tAddress : " << (unsigned)&M3.days;

    return 0;
}