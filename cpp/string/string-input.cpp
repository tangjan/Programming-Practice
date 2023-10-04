#include <iostream>
#include <string>
using namespace std;

int main(){
    string str_cin, str_getline;
    int i;

while(1){
    cout << "输入数字选择输入方式, 以回车结束, 1: cin, 2: getline\n请输入: ";
    cin >> i;
    switch(i){
        case 1:
            // https://cplusplus.com/reference/iostream/cin/?kw=cin
            // cin 遇到空白符停止
            // 空白符: 空格 `\t` `\n` `\v` `\f` `\r`，详见 https://cplusplus.com/reference/cctype/isspace/
            cout << "通过 cin 输入: "; 
            cin >> str_cin;
            cout << "输出: ";
            cout << str_cin << endl << "————————————————————" << endl;
            continue;

        case 2:
            // https://cplusplus.com/reference/string/string/getline/?kw=getline
            // https://en.cppreference.com/w/cpp/string/basic_string/getline
            cout << "通过 getline 输入，以 '*' 结束: "; 
            cin.clear();
            getline(cin, str_getline, '*');
            cout << "输出: " << str_getline << endl << "————————————————————" << endl;
            continue;
    }
    return 0;
}
}
