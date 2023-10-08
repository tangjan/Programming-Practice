// HJ12 字符串反转
// https://www.nowcoder.com/practice/e45e078701ab4e4cb49393ae30f1bb04

#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cin >> str;
    for(int i=str.size()-1; i>=0 ; i--){
        cout << str[i];
    }
}