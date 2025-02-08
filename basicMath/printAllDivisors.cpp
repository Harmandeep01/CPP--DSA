#include <algorithm>
#include<iostream>
#include <vector>

using namespace std;
/*
    Normal Method
    void printAllDivisors(int n){
        for(int i = 1; i <= n; i++){
            if(i == n){
                cout << i;
            }else if(n%i == 0){
                cout << i << ", ";
            }
        }
    }

*/

/*sqrt method*/

void printAllDivisors(int n){
    vector<int> ls;
    for(int i = 1; i*i <= n;i++){
        if(n%i == 0){
            ls.push_back(i);
            if((n/i) != i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for(auto i : ls){
        cout << i << " ";
    }
}

int main(){
    printAllDivisors(36);
    return 0;
}