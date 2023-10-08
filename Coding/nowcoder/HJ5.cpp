// HJ5 进制转换
// https://www.nowcoder.com/practice/8f3df50d2b9043208c5eed283d1d4da6

/*

思路：根据十六进制的转换规则直接编程实现。

*/

#include <iostream>
#include <string>
#include <cmath>     // pow

using namespace std;

int main()
{
    string str;
    cin >> str;
    int ans = 0;

    for (int i = str.length() - 1; i >= 2; --i)
    {
        // A: 65  a: 97  0: 48
        if (isalpha(str[i]))
        {
            ans += (str[i] - 55) * pow(16, str.length() - 1 - i);
        }
        else
        {
            ans += (str[i] - 48) * pow(16, str.length() - 1 - i);
        }
    }

    cout << ans;

    return 0;
}