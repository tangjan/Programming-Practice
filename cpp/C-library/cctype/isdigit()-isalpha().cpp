// https://cplusplus.com/reference/cctype/isdigit/
// https://cplusplus.com/reference/cctype/isalpha/
// https://en.cppreference.com/w/cpp/string/byte/isalpha

#include <cctype>
#include <iostream>
#include <string>

using namespace std;

int main(){
    string str="Aa1";
    cout << isalpha(str[0]);
    // 输出：1
    cout << isalpha(str[1]);
    // 输出：2
    cout << isdigit(str[2]);
    // 输出：1

    

    return 0;
}

