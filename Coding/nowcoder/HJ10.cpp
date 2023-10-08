// HJ10 字符个数统计
// https://www.nowcoder.com/practice/eb94f6a5b2ba49c6ac72d40b5ce95f50

#include <iostream>
#include <array>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    array<int, 128> arr={0};
    for (string::iterator it = str.begin(); it != str.end(); ++it)
    {
        arr[*it] = 1;
    }

    int ans = 0;
    for(array<int, 128>::iterator it = arr.begin(); it != arr.end(); ++it)
    {
        ans += *it;
    }
    cout << ans;

    return 0;
}
