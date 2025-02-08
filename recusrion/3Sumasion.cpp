#include<iostream>

using namespace std;

//Paramaterised SUM
void paramSummasion(int i, int sum){
    if(i < 1){
        cout << sum;
        return;
    }

    paramSummasion(i - 1, sum + i);
}

//Functional Recursion SUM
int sum(int n){
    int result = 0;
    if(n == 0) {
        return n;
    }

    return n + sum(n-1);
}

int main(){
    // paramSummasion(3, 0);

    cout << sum(3);
    return 0;
}