// HJ4 字符串分隔
// https://www.nowcoder.com/practice/d9162298cb5a437aad722fccccaae8a7

/*
思路

分别计算传入的字符串是 8 的几倍、余数是多少，然后用它们进行输出。
缺点：用到了循环嵌套，时间复杂度增加。
优点：易理解。
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // int count = 8;
    string str;
    getline(cin, str);
    int times = str.length() / 8;
    int residue = str.length() % 8;
    for(int i = 0; i < times; ++i)
    {
        for(int j = i*8; j < i*8 + 8; ++j){
            cout << str[j];
        }
        cout << endl;
    }

    for(int i = times * 8; i < times*8 + residue; ++i)
    {
        cout << str[i];
    }
    if(residue)
    {
        for(int i = 0; i < 8 - residue; ++i)
        {
            cout << '0';
        }
    }
    
    return 0;
}