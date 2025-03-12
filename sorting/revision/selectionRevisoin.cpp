#include<iostream>
#include<bits/stdc++.h>

using namespace std;
void selectionS(vector<int>& arr, int n){
    for(int i = 0; i < n; i++){
        int minIndex = i;
        for(int j = i + 1; j < n; j++){
            if(arr[j] < arr[minIndex]){
               minIndex = j;     //finds smallest element
        }
    }
       //do swapping
       if(minIndex != i){
       int temp = arr[minIndex];
       arr[minIndex] = arr[i];
       arr[i] = temp;

       }
    }
}

int main(){

    vector<int> nums = {99, 98, 69, 98,  52, 1024};
    selectionS(nums, nums.size());

    for(auto i : nums){
        cout << i << " ";
    }cout << endl;


    return 0;
}