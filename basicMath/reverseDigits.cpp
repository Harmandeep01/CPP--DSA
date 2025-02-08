#include <climits>
#include<iostream>

using namespace std;

int reverse(int x) {
        long revNum = 0;
        while(x != 0){
        int ed = x % 10;

       revNum = (revNum * 10) + ed;
        x = x/10;
        }

    if(revNum > INT_MAX || revNum < INT_MIN){
        return 0;
    }
        return revNum;
    }

int main(){

    cout << reverse(-321);


    return 0;
}