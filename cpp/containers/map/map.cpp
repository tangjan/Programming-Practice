#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int, string> myname;
    // map<int, string> myname{{1, "Jan"}, {2, "Tang"}};
    
    myname[1] = "Jan";
    myname[2] = "Tang";

    cout << myname[1] << ' ' << myname[2];
}