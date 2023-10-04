// HJ8 合并表记录
// https://www.nowcoder.com/practice/de044e89123f4a7482bd2b214a685201

#include <iostream>
#include <map>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<int, int> input;
    map<int, int>::iterator it;
    for(int i=0; i<n; i++){
        int a, b;
        cin >> a >> b;
        it = input.find(a);
        if(it != input.end()){
            input[a] = it->second + b;
        }
        else{
            input[a] = b;
        }
    }

    for(it = input.begin(); it != input.end(); ++it){
        cout << it->first << ' ' << it->second << endl;
    }

    return 0;
}