#include<bits/stdc++.h>

using namespace  std;

void BubbleSort(vector<int>& arr, int n){
    int swapped = 0;
    if(n == 0) return;
        for(int j = 0; j <= (n - 2); j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                swapped = 1;
            }
            if(swapped == 0){
                break;
            }
            cout << "run" << endl;
    }

    BubbleSort(arr, n - 1);
}

int main(){ 

    vector<int> nums = {4, 1, 3, 9, 7};

    BubbleSort(nums, nums.size());
    for(auto i : nums){
        cout << i << " ";
    }cout<<endl;


    return 0;
}