#include<bits/stdc++.h>
#include <climits>

using namespace std;

bool sorted(vector<int> & arr, int n){
    bool isSorted = true;
    for(int i = 0; i < n - 1; i++){
        if(!(arr[i] < arr[i + 1])){
            isSorted = false;
            break;
        }
    }

    return isSorted;
}

int main(){ 

    vector<int> arr = { 1 , 2, 3, 4, 5};
    cout << boolalpha << sorted(arr, arr.size());
    return 0;
}