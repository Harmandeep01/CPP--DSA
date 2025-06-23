#include<bits/stdc++.h>

using namespace std;

//Brute Force
/*
int longestSubArray(vector<int>& nums, int k){
    int cnt = 0;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        int XOR = 0;
        for(int j = i; j < n; j++){
            XOR = XOR ^ nums[j];

            if(XOR == k){
                cnt++;
            }
        }
    }
    return cnt;
}
*/
//Optimal Solution
/*
int longestSubArray(vector<int>& nums, int k){
   int n = nums.size();
    map<int, int> mpp;
    int xr = 0;
    int cnt = 0;
    mpp[xr]++;
    for(int i = 0; i < n; i++){
        xr = xr ^ nums[i];
        int x = xr ^ k;
        cnt += mpp[x];
        mpp[xr]++;
    }

    return cnt;
}
*/

int longestSubArray(vector<int>& nums, int k){
    int cnt = 0;
    int xr = 0;
    map<int, int>mpp;
    mpp[xr]++;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        xr = xr ^ nums[i];
        int x = xr ^ k;
        cnt += mpp[x];

        mpp[xr]++;
    }
    return cnt;
}

int main(){

    vector<int> nums = {4,2,2,6,4};
    int res = longestSubArray(nums, 6);
     cout << res;   
    return 0;
}