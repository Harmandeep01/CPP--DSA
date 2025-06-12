#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
void countedPairs(vector<int>& nums, int low, int mid, int high){
    int right = mid + 1;
    for(int i = low; i <= mid; i++){
        while(nums[i] > 2*nums[right] && right <= high){
            right++;
        }
        cnt += (right - (mid + 1));
    }
}

void merge(vector<int>& nums, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid + 1;
    while(left <= mid && right <= high){
        if(nums[left] <= nums[right]){
            temp.push_back(nums[left]);
            left++;
        }else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(nums[right]);
        right++;
    }

    for(int i = low; i <= high; i++){
        nums[i] = temp[i - low];
    }
}

void mergeSort(vector<int>& nums, int low, int high){
    if(low >= high) return;
    int mid = (low + high) / 2;
    mergeSort(nums, low, mid);
    mergeSort(nums, mid + 1, high);
    countedPairs(nums, low, mid, high);
    merge(nums, low, mid, high);
}

// Time Complexity => logn * n + 2 nlogn
// Space Complexity => O(n) ; 
//Note => we distorted the original array/vector

int main(){
    vector<int> numbers = {1,3,2,3,1};
    mergeSort(numbers, 0, numbers.size() - 1);
    cout << cnt;
    return 0;
}