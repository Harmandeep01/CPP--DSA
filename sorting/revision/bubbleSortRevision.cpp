#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void bubbleS(vector<int>& arr, int n){
        for(int i = n; i > 0; i--){
            int swapped = 0;
            for(int j = 0; j < i - 1; j++){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                    swapped = 1;
                }
            }
            cout << "RUN" << endl;
            if(swapped == 0){
                break;
            }
        }
}

int main (){

    vector<int> nums = {2, 1, 3, 5, 4};
    bubbleS(nums, nums.size());
    for(auto i : nums){
        cout << i << " ";
    }cout << endl;

    return 0;
}