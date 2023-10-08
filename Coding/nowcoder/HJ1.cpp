// HJ1 字符串最后一个单词的长度
// https://www.nowcoder.com/practice/8c949ea5f36f422594b306a2300315da

#include <iostream>
#include <string>
using namespace std;

int main(){
    int count;
    string str;
    // cin >> str; 
    // 不能用 cin，因为 cin 遇空格截断
    getline(cin, str);
    for(int i = str.size()-1; i>=0; --i){
        if(str[i] == ' '){
            break;
        }
        count++;
    }
    cout << count;
}