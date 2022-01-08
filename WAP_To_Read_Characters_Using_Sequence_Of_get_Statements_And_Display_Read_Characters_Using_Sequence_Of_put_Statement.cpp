#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char ch[3];
    cout << "\nEnter characters : ";
    cin.get(ch[0]).get(ch[1]).get(ch[2]);

    cout << "\nCharacters entered : ";
    cout.put(ch[0]).put(ch[1]).put(ch[2]);
}