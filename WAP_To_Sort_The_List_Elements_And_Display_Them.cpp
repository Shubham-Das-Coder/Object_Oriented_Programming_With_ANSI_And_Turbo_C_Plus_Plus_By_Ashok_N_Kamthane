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
    list.push_back(23);
    list.push_back(19);
    list.push_back(5);
    list.push_back(15);
    list.push_back(25);
    list.push_back(20);

    cout << "\nUnsorted list : ";
    show(list);
    cout << "\nSorted list : ";
    list.sort();
    show(list);
    return 0;
}