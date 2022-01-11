#include <iostream>
#include <conio.h>

using namespace std;

class digit
{
    static int num[10];

public:
    void check(int n);
    void show();
    void input();
    void ini();
};

int digit ::num[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

void digit ::show()
{
    for (int j = 0; j < 10; j++)
    {
        if (num[j] == 0)
            continue;
        cout << "\nNumber " << j << " occurs " << num[j] << " times";
    }
}

void digit ::ini()
{
    for (int k = 0; k < 10; k++)
        num[k] = 0;
}

void digit ::input()
{
    int x, y;
    cout << endl
         << "\nEnter a Number : ";
    cin >> y;
    check(y);
}

void digit ::check(int u)
{
    int m;

    while (u != 0)
    {
        m = u % 10;
        num[m]++;
        u = u / 10;
    }
}

int main()
{
    digit d;
    // d.ini();
    d.input();
    d.show();
}