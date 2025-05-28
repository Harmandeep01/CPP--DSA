
#include <bits/stdc++.h>

using namespace std;

//Brute Force

/*
int subarraySum(vector<int> &nums, int k) {
  int n = nums.size();    
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
        int sum = 0;
      for(int l = i; l <= j; l++){
          sum += nums[l];
      }
        if(sum == k){
              cnt++;
          }
    }
  }

  return cnt;
}
*/

//Better Solution
/*
int subarraySum(vector<int> &nums, int k){
    int n = nums.size();
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += nums[j];
            if(sum == k){
                cnt++;
            }
        }
        
    }
    return cnt;
}
*/

//Optimal Solution
int subarraySum(vector<int> &nums, int k){
    int n = nums.size();
    int cnt = 0;
    int sum = 0;
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    for(int i = 0; i < n; i++){
        sum += nums[i];
       /* 
        // int remove = sum - k;
        // cnt += mpp[remove];
        // mpp[sum]++;
        */
        //OR
        if(mpp.find(sum - k) != mpp.end()){
            cnt += mpp[sum - k];
        }
        mpp[sum]++;
    }
    
    return cnt;
}

int main() {

  vector<int> nums = {1,2,3,-3,1,1,1,4,2,-3};
  int k = 3;
  cout << subarraySum(nums, k);
    //output : 2
  return 0;
}