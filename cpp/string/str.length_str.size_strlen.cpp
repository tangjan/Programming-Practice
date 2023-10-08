// str.length() 和 str.size() 是 <string> 库下的
// https://cplusplus.com/reference/string/string/size/
// https://cplusplus.com/reference/string/string/length/

// strlen() 是 <cstring> 库下的，用于字符数组
// https://cplusplus.com/reference/cstring/strlen/?kw=strlen
// https://en.cppreference.com/w/cpp/string/byte/strlen

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    string str = "Jan Tang";
    char ch[10]="Jan Tang";
    cout << "str.length() = " << str.length() << endl;
    cout << "str.size() = " << str.size() << endl;
    cout << "strlen(str) = " << strlen(ch) << endl;

}
