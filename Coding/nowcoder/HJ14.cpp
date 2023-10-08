// HJ14 字符串排序
// https://www.nowcoder.com/practice/5af18ba2eb45443aa91a11e848aa6723

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> vec;
    string str;
    for(int i = 0; i < n; ++i)
    {
        cin >> str;
        vec.push_back(str);
    }
    sort(vec.begin(), vec.end());
    for(int i = 0; i < n; ++i)
    {
        cout << vec[i] << endl;
    }

    return 0;
}