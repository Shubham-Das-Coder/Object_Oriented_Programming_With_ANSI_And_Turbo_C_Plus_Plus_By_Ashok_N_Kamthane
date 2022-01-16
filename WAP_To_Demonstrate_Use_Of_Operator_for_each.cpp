#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <class S>
class show
{
public:
    void operator()(const S &s)
    {
        cout << s;
    }
};

int main()
{
    show<int> showvalue;
    vector<int> vi(4);

    for (int j = 0; j < 4; j++)
        vi[j] = j;

    cout << "for_each()\n";

    for_each(vi.begin(), vi.end(), showvalue);
    cout << "\n";
    return 0;
}