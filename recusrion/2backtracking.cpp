#include<iostream>

using namespace std;

void backtrack(int i, int n){
    if(i>n) return;

    backtrack(i + 1, n);
    cout << i << " ";
}

int main(){

    backtrack(1, 5);

    return 0;
}