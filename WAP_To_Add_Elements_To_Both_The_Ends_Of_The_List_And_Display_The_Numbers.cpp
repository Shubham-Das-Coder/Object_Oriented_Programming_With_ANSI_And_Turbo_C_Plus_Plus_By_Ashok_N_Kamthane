#include <iostream>
#include <list>

using namespace std;

void show(list<int> &num)
{
    list<int>::iterator n;
    for (n = num.begin(); n != num.end(); ++n)
        cout << *n << "  ";
}

int main()
{
    list<int> list;
    list.push_back(5);
    list.push_back(10);
    list.push_back(15);
    list.push_back(20);

    cout << "\nNumbers are\n";
    show(list);
    list.push_front(1);
    list.push_back(25);
    cout << "\nAfter adding numbers are\n";
    show(list);
    return 0;
}