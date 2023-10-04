#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // https://cplusplus.com/reference/map/map/
    // https://en.cppreference.com/w/cpp/container/map

    map<int, string> myname;
    // map<int, string> myname{{1, "Jan"}, {2, "Tang"}};
    
    myname[1] = "Jan";
    myname[2] = "Tang";

    cout << myname[1] << ' ' << myname[2] << endl;

    map<string, int> mon;
    map<string, int>::iterator it;
    mon["Mon"] = 1;
    it = mon.begin();
    cout << it->first << ': ' << it->second;
}