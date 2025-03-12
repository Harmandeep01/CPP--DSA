#include<bits/stdc++.h>
#include <utility>

using namespace std;

int partitionFunction(vector<int>& arr, int low, int high){

}

void qSort(vector<int>& arr, int low, int high){
    if(low < high){
        int pIndex = partitionFunction(arr, low, high);
        qSort(arr, low, pIndex - 1);
        qSort(arr, pIndex + 1, high);

    }
}

int main(){

    vector<int> nums = {4, 6, 2, 5, 7, 9, 1, 3};
    qSort(nums, 0,nums.size()-1);

    for(auto i : nums){
        cout << i << " ";
    }cout << endl;
    return 0;
}