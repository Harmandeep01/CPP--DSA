#include<bits/stdc++.h>

using namespace std;

/*
//Brute Force
//Time Complexity => O(n^2);
//Space Complexity => O(1);
bool ls(vector<int>& arr, int target){
  int n = arr.size();
  for(int i = 0; i < n; i++){
    if(arr[i] == target) return true;
  }
  return false;
}

int longestConsecutive(vector<int>& nums){
  int n = nums.size();
  int cnt = 0;
  for(int i = 0; i < n; i++){
    int x = nums[i];
    int longest = 1;
    while( ls(nums, x + 1 ) ){
      x = x + 1;
      longest++;
    }
    cnt = max(cnt, longest);
  }
  return cnt;
}
*/

//Better Solution
int longestConsecutive(vector<int>& nums){
  sort(nums.begin(), nums.end());
  int longest = 1;
  int n = nums.size();
  int LAST_SMALLER = INT_MIN;
  int currCnt = 0;
  
  for(int i = 0; i < n; i++){
    if(nums[i] - 1 == LAST_SMALLER){
      currCnt++;
      LAST_SMALLER = nums[i];
    }else if(LAST_SMALLER != nums[i]){
      currCnt = 1;
      LAST_SMALLER = nums[i];
    }
    longest = max(currCnt, longest);
  }
  return longest;
}

int main() {
  vector<int> nums = {100,4,200,1,3,2};
  int ans = longestConsecutive(nums);
  cout << ans;
}