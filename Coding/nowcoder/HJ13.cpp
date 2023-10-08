// HJ13 句子逆序
// https://www.nowcoder.com/practice/48b3cb4e3c694d9da5526e6255bb73c3

#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
    string input, temp;
    stack<string> stk;
    getline(cin, input);

    for(int i=0; i<input.size(); ++i){
        if(input[i] != ' '){
            temp += input[i];
        }
        else{
            stk.push(temp);
            temp = "";
        }
        if( i == input.size() -1){
            stk.push(temp);
        }
    }

    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }
    
    return 0;
}