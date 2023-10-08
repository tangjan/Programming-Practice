// HJ2 计算某字符出现次数
// https://www.nowcoder.com/practice/a35ce98431874e3a820dbe4b2d0508b1

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    char ch = tolower(getchar());
    int ans=0;

    for(int i = 0; i < str.length(); ++i)
    {
        if(ch == tolower(str[i]))
        {
            ans++;
        }
    }
    cout << ans;
}