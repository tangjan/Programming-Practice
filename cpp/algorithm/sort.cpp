#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

int main()
{
    array<int, 5> arr = {2, 1, 5, 3, 4};
    sort(arr.begin(), arr.end());
    for(array<int, 5>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        cout << *it << ' ';
    }
    // 输出: 1 2 3 4 5

return 0;
}