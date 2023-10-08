// https://cplusplus.com/reference/cstdlib/atoi/
// https://stackoverflow.com/questions/2909768/where-did-the-name-atoi-come-from
// atoi: Ascii to Integer，将字符串转为整型。itoa 反之。
// itoa 是非标准库函数。

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    int temp = atoi("123");
    cout << temp << endl;

    // string str;
    char str[10];
    itoa(321, str, 10);
    cout << str;

    return 0;
}