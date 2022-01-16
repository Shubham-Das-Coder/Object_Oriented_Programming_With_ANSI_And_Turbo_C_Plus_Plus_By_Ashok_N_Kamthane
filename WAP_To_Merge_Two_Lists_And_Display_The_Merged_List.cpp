#include <iostream>
#include <list>

using namespace std;

void show(list<int> &num)
{
    list<int>::iterator n;
    for (n = num.begin(); n != num.end(); ++n)
    {
        cout << *n
             << "  ";
    }
}

int main()
{
    list<int> listX, listY;

    listX.push_back(23);
    listX.push_back(19);
    listX.push_back(5);

    listY.push_back(15);
    listY.push_back(25);
    listY.push_back(20);

    cout << "\nElements of listX : ";
    show(listX);
    cout << "\nElements of listY : ";
    show(listY);

    listX.merge(listY);
    cout << "\nMerged list : ";
    show(listX);

    return 0;
}