#include <iostream>

using namespace std;

int main()
{
    struct my_friend
    {
        char *fname;
        int phone, age, height;
    } A;
    A.fname = "Bharat";
    A.phone = 26251;
    A.age = 22;
    A.height = 4.5;

    cout << "\nContents of object A";
    cout << "\nName   : " << A.fname;
    cout << "\nPhone  : " << A.phone;
    cout << "\nAge    : " << A.age;
    cout << "\nHeight :" << A.height;
}