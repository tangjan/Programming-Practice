// https://cplusplus.com/reference/stack/stack/
// https://en.cppreference.com/w/cpp/container/stack

#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
    stack<string> stk;
    stk.push("a1");
    stk.push("a2");
    stk.push("a3");
    stk.push("a4");
    stk.push("a5");

    cout << "stk's content: \n";
    while(!stk.empty()){
        cout << stk.top() << endl;
        stk.pop();
    }

    return 0;
}