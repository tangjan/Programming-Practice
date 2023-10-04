// HJ13 句子逆序
// https://www.nowcoder.com/practice/48b3cb4e3c694d9da5526e6255bb73c3
/* 
将一个英文语句以单词为单位逆序排放。例如“I am a boy”，逆序排放后为“boy a am I”
所有单词之间用一个空格隔开，语句中除了英文字母外，不再包含其他字符
数据范围：输入的字符串长度满足 1 ≤ n ≤ 1000
注意本题有多组输入
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string input, ans;
    while(cin >> input){
        ans = input + " " + ans;
    }
    cout << ans << endl;
    return 0;
}