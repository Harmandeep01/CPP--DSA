#include<bits/stdc++.h>
#include <utility>

using namespace std;

void removeZeroes(vector<int>& arr){
    int j = -1;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    for(int i = j; i < arr.size(); i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){

    vector<int> nums = { 0, 1, 0, 3, 12};


    removeZeroes(nums);

    for(auto i : nums){
        cout << i << " ";
    }cout << endl;

    return 0;
}