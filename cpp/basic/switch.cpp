#include <iostream>
using namespace std;

int main(){
label:
    cout << "请输入一个 1 ~ 7 之间的数字，会返回它是周几的英文单词：";
    int num;
    cin >> num;

    switch (num){
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "输入错误，请重新输入" << endl;
            goto label;
            break;
    }
}