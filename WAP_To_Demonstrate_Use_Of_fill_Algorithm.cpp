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
    vector<int> vi(8);

    fill(vi.begin(), vi.begin() + 2, 5);
    fill(vi.begin() + 2, vi.begin() + 4, 6);
    fill(vi.begin() + 4, vi.end(), 7);

    cout << "for_each()\n";

    for_each(vi.begin(), vi.end(), showvalue);
    cout << "\n";
    return 0;
}