// HJ3 明明的随机数
// https://www.nowcoder.com/practice/3245215fffb84b7b81285493eae92ff0

/*
思路

用下标存储输入的数据。
因为输入的数字大小处于 [1, 500] 区间内，所以定义一个 500 个 0 的 vector，有数据时就将相应下标元素的置1。
*/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, num;
    cin >> n;
    vector<int> vec(500, 0);
    for (int i = 0; i < n; ++i)
    {
        cin >> num;
        vec[num] = 1;
    }
    for (int i = 0; i < 500; ++i)
    {
        if (vec[i] != 0)
        {
            cout << i << endl;
        }
    }

    return 0;
}