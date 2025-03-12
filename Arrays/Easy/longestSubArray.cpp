#include<bits/stdc++.h>

using namespace std;

//<-------BRUTE FORCE APPROACH--------->
/*
//brute force --> Time Complexity O(n^3)
    int longestSubArray(vector<int>& nums, int k){
        int len = 0;
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            for(int j = i; j < nums.size(); j++){
                for(int l = i; l < j; l++){
                    sum += nums[l];
                if(sum == k) {
                len = max(len, j - i + 1);
                }
                }
            }
        }
        return len;
    }
*/

/*
    //Brute Force better solution
    //reduces time complexity to O(n^2)

    int longestSubArray(vector<int>& nums, int k){
        int len = 0;
        for(int i = 0; i < nums.size(); i++){
            int sum = 0;
            for(int j = i; j < nums.size(); j++){
                sum += nums[j];
                if(sum == k){
                    len = max(len, j - i + 1);
                }
            }
        }

        return len;
    }
*/


// <--------BETTER SOLUTION-------->
/*
int longestSubArray(vector<int>& nums, int k){
    map<long long, int>prefixSumMap;
    long long sum = 0;

    int maxLen = 0;

    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];
        if(sum == k){
            maxLen = max(maxLen, i + 1);
        }

        int rem = sum - k;
        if(prefixSumMap.find(rem) != prefixSumMap.end()){ //not equals to not found
            int len = i - prefixSumMap[rem];
            maxLen = max(maxLen, len);
        }
        if(prefixSumMap.find(sum) == prefixSumMap.end()){
            prefixSumMap[sum] = i;
            // cout << prefixSumMap[sum] << " " << endl;
        }
    }

    return maxLen;
}
*/


//optimal solution
int longestSubArray(vector<int>& arr, int k){
    int maxLen = 0;
    long long sum = arr[0];
    int right = 0, left = 0;

    while(right < arr.size()){
        while(left <= right && sum > k){
            sum -= arr[left];
            left++;
        }

        if(sum == k){
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
        if(right < arr.size()){
            sum += arr[right];
        }
    }

    return maxLen;
}



int main(){
    vector<int> nums = {2, 0, 0, 3};
    cout << longestSubArray(nums, 3);
    return 0;
}