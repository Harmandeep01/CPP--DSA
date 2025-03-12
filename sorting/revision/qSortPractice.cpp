#include <algorithm>
#include<bits/stdc++.h>
#include <vector>

using namespace std;

int partition(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i <= high - 1){
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){
            j--;
        }
        if(i < j){
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);
    return j;
}

void quickSort(vector<int>& arr, int low, int high){
    if(low < high){
        int pIndex = partition(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main(){

    vector<int> nums = {2, 1, 10, 4 , 5, 6, 9};

    quickSort(nums, 0, nums.size()-1);

    for(auto i : nums){
        cout << i << " ";
    }cout << endl;


    return 0;
}