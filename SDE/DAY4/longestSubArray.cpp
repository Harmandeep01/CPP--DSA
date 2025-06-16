#include<bits/stdc++.h>

using namespace std;

//Brute Force
/*
int longestSubArray(vector<int>& nums, int k){
    int n = nums.size();
    int longest = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += nums[j];
            if(sum == k){
                int subLen = j - i + 1;
                longest = max(longest, subLen);
            }
        }
    }
    return longest;
}
*/

//Better
int longestSubArray(vector<int>& nums, int k){
    map<long long, int> mpp;
    long long preSum = 0;
    int n = nums.size();
    int maxLen = 0;
    for(int i = 0; i < n; i++){
        preSum += nums[i];

        if(preSum == k){
            maxLen = max(maxLen, i + 1);
        }

        long long rem = preSum - k;
        if(mpp.find(rem) != mpp.end()){
            maxLen = max(maxLen, i - mpp[rem]);
        }
        
       if(mpp.find(preSum) == mpp.end()){
            mpp[preSum] = i;
       }
    }
    return maxLen;
}
int main(){

    vector<int> nums = {2,0,0,3};
    int res = longestSubArray(nums, 3);
     cout << res;   
    return 0;
}