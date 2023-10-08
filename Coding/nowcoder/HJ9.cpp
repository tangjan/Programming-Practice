// HJ9 提取不重复的整数
// https://www.nowcoder.com/practice/253986e66d114d378ae8de2e6c4577c1

// 思路：哈希。用一个数组记录输出状态。

#include <iostream>
#include <string>
#include <array>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str = to_string(n);
    array<int, 10> arr = {0};
    for(string::iterator it = str.end()-1; it != str.begin()-1; --it)
    {
        if(!arr[*it - 48])
        {
            cout << *it - 48;
        }
        arr[*it - 48] = 1;
    }
    
    return 0;
}