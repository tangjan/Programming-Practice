// https://cplusplus.com/reference/cctype/toupper/

// tolower 和 toupper 的返回值类型是 int，所以需要用 putchar

#include <iostream>
#include <cctype>
using namespace std;

int main(){
    char temp1 = 'f', temp2 = 'E';
    cout << toupper(temp1) << ' ' ;
    cout << tolower(temp2) << endl;
    // 输出：70 101
    
    putchar(toupper(temp1));
    putchar(tolower(temp2));
    // 输出：Fe

    return 0;
}