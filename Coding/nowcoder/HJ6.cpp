// HJ6 质数因子
// https://www.nowcoder.com/practice/196534628ca6490ebce2e336b47b3607

// tip: 一个数的最小质因数不会超过它的算术平方根

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= sqrt(n); ++i)
    {
        // 使用 if 求解，会运行超时
        // if(n % i == 0)
        // {
        //     cout << i << ' ';
        //     n /= i;
        //     i = 1;
        // }
        // cout << n;
        while(n % i == 0)
        {
            cout << i << ' ';
            n /= i;
        }
    }
    if(n - 1)
    {
        cout << n;
    }

    return 0;
}
