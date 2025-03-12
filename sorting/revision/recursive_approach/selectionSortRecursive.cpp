#include<bits/stdc++.h>
using namespace std;

void selectionSortRecursive(vector<int>& arr, int low, int n){
    if(low > n - 1) return;
    int j = low;
    while(j > 0 && arr[j - 1] > arr[j]){
        int temp = arr[j - 1];
        arr[j - 1] = arr[j];
        arr[j] = temp;

        j--; 
    }

    selectionSortRecursive(arr, low + 1, n);
}

int main(){

    vector<int> nums = {13, 46, 24, 52, 20, 9};

    selectionSortRecursive(nums, 0, nums.size());

    for(auto i : nums){
        cout << i << " ";
    }cout << endl;

    return 0;
}