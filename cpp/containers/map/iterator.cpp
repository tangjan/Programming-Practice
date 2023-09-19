#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> nums;
    map<int, int>::iterator it;
    for(int i=1; i<=9; ++i){
        nums[i] = 10*i;
    }

    for(it=nums.begin(); it!=nums.end(); ++it){
        cout << "nums[" << it->first << ']' << '=' << it->second << endl;
    }
}