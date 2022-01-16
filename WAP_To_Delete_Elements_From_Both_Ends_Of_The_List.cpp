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
    list.pop_front();
    list.pop_back();
    cout << "\nAfter deleting numbers are\n";
    show(list);
    return 0;
}