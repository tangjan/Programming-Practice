// https://cplusplus.com/reference/string/to_string/
// https://cplusplus.com/reference/string/stoi/
// stoi: string to int

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // to_string
    string str = to_string(123);
    cout << str << endl;

    // stoi
    int n = stoi("321");
    cout << n;
} 