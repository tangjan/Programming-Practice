// HJ7 取近似值
// https://www.nowcoder.com/practice/3ab09737afb645cc82c35d56a5ce802a

#include <iostream>
using namespace std;

int main()
{
    // 库函数解法
    /*
        double num;
        cin >> num;
        cout<< round(num);
    */

    double num;
    cin >> num;
    cout << (int)(num + 0.5);

}
