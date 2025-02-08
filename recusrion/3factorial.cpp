#include<iostream>

using namespace std;

int fact(int n){
    if(n == 1){
        return n;
    }

    return n * fact(n - 1);
}

/* 
    TC : O(n);
    SC : O(n);
*/


int main(){
    // paramSummasion(3, 0);

    cout << fact(5);
    return 0;
}