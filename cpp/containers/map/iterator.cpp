// https://cplusplus.com/reference/iterator/iterator/?kw=iterator

#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, int> nums;
    map<int, int>::iterator it;
    for(int i = 1; i <= 9; ++i){
        nums[i] = 10 * i;
    }

    for(it = nums.begin(); it != nums.end(); ++it){
        cout << "nums[" << it->first << ']' << '=' << it->second << endl;
        /*
        输出：
            nums[1]=10
            nums[2]=20
            nums[3]=30
            nums[4]=40
            nums[5]=50
            nums[6]=60
            nums[7]=70
            nums[8]=80
            nums[9]=90
        */
    }
}