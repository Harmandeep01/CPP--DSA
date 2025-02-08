#include<iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    int left = low;
    int right = mid + 1;

    vector<int> temp;
    while(left <= mid && right <= high){
        if(arr[left] < arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        arr[i] = temp[i - low];
    }
}

void mergeSort(vector<int> &arr, int low, int high){
    if(low == high) return;
    int mid = (low + high) / 2;
    mergeSort(arr, low, mid);
    mergeSort(arr, mid + 1, high);
    merge(arr, low, mid, high);

}

int main(){

    vector<int> nums = {21, 12, 11, 9, 1, 100, 99, 75};

    mergeSort(nums, 0, nums.size() - 1);
    for(auto i : nums){
        cout << i << " ";
    }cout << endl;
    return 0;
}