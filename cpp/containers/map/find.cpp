// map::find    https://cplusplus.com/reference/map/map/find/
// map::erase   https://cplusplus.com/reference/map/map/erase/

#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<int, string> week;
    map<int, string>::iterator it;

    week[1] = "Mon";
    week[2] = "Tue";
    week[3] = "Wed";
    week[4] = "Thur";
    week[5] = "Fri";
    week[6] = "Sat";
    week[7] = "Sun";

    it = week.find(3);

    cout << it->second;
}