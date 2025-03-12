#include<bits/stdc++.h>

using namespace std;

void reverseArray(vector<int>& arr, int start, int end){
    while(start <= end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main(){ 

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    reverseArray(nums, 0, nums.size() - 1);
    for(auto i : nums){
        cout << i << " ";
    }

    return 0;
}