// https://cplusplus.com/reference/string/string/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Kariya Wakana";
    for (string::iterator it = str.begin(); it != str.end(); ++it)
    {
        cout << *it;
    }
}
