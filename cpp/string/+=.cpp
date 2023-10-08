#include <iostream>
#include <string>
using namespace std;

// 对 string 使用 "+" 运算符表示字符拼接
// 参见 https://cplusplus.com/reference/string/string/operator+=/
int main(){
    string str;
    for(char i=65; i!='F'; ++i){
        str += i;
    }
    cout << str << endl;
    // 输出结果：ABCDE

    string name;
    name += "Jan";
    name += ' ';
    name += "Tang";
    cout << name;
    // 输出结果：Jan Tang

    return 0;
}