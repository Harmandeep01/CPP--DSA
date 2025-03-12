#include<bits/stdc++.h>
#include <vector>

using namespace std;

void sortZeroOneTwo(vector<int>& arr){

    int low = 0, mid = 0, high = arr.size() - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            int temp = arr[mid];
            arr[mid] = arr[low];
            arr[low] = temp;

            mid++, low++; 
        }else if(arr[mid] == 1) mid++;
        else{
            int temp = arr[high];
            arr[high] = arr[mid];
            arr[mid] = temp;

            high--;
        }
    }

}

//Time Complexity : O(n);

int main(){

    vector<int> nums = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0 ,0};
    sortZeroOneTwo(nums);

    for(auto i : nums){
        cout << i << " ";
    }cout << endl;

    return 0;
}