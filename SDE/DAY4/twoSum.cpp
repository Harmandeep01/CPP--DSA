#include<bits/stdc++.h>

using namespace std;

//Better Solution
/*
vector<int> twoSum(vector<int>& arr, int target){
    int n = arr.size();
    vector<int> temp;

    map<int, int> mpp;
    for(int i = 0; i < n; i++){
        int num = arr[i];

        int moreNeeded = target - num;
        if(mpp.find(moreNeeded) != mpp.end()){
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }

    return {-1, -1};
    
}
//Time Complexity => O(n * logn) => In worst case unordered map takes O(n^2)
//Space Complexity => O(n)
*/

// Optimal Solution
vector<int> twoSum(vector<int>& nums, int target){
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> temp;
    int left = 0;
    int right = n - 1;
    for(int i = 0; i < n; i++){
        while(left < right){
            cout << left << " " << right;
            int sum = nums[left] + nums[right];
            if( sum == target){
                temp.push_back(left);
                temp.push_back(right);
                return temp;
            }else if(sum < target){
                left++;
            }else{
                right--;
            }
        }
    }
    return temp;
}
int main(){
    vector<int> nums = {3,2,4};
    vector<int> result = twoSum(nums, 6);

    for(auto i: result){
        cout << i << " ";
    }cout << endl;
    return 0;
}