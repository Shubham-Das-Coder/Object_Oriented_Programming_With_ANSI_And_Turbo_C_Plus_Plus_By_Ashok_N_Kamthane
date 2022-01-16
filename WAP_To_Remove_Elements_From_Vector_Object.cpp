#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main()
{
    vector<float> e;
    cout.precision(2);
    cout << "\nOriginal elements : ";
    for (int k = 5; k < 12; k++)
    {
        e.push_back(sqrt(k));
        cout << sqrt(k) << "  ";
    }
    vector<float>::iterator ir = e.begin();
    e.erase(ir + 3, ir + 5);

    int s = e.size();

    cout << "\nThe elements after erase() : ";
    for (int k = 0; k < s; k++)
        cout << e[k] << "  ";
    cout << "\n";

    return 0;
}