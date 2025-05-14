#include<bits/stdc++.h>

using namespace std;

void nextPermutation(vector<int>& nums) {
    int dip = -1;

    for(int i = nums.size() - 2; i >= 0; i--){
        if(nums[i] < nums[i + 1]){
        dip = i;
        break;
        }

    }

    if(dip != -1){
        for(int i = nums.size() - 1; i >= 0; i--){
            if(nums[i] > nums[dip]){
                swap(nums[i], nums[dip]);
            break;
            }
        }

        reverse(nums.begin() + dip + 1, nums.end());
    }else{
        reverse(nums.begin(), nums.end());
    }

}


int main(){

    vector<int> arr = {1,1,5};
    nextPermutation(arr);
    for(auto i : arr){
        cout << i << " ";
        
    }cout << endl;
    return 0;
}