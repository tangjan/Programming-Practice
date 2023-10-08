// HJ11 数字颠倒
// https://www.nowcoder.com/practice/ae809795fca34687a48b172186e3dafe

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str = to_string(n);
    for(string::iterator it = str.end() - 1; it != str.begin() - 1 ; --it)
    {
        cout << *it;
    }

    return 0;
}