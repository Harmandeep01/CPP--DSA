#include<bits/stdc++.h>

using namespace std;

/*
//Brute Force
//Time Complexity => O(n^3);
//Space Complexity
vector<vector<int>> fourSum(vector<int>& nums, int target){
  int n = nums.size();
  set<vector<int>> st;
  for(int i = 0; i < n - 2; i++){
    for(int j = i + 1; j < n - 1; j++){
      set<int> hashSet;
      for(int k = j + 1; k < n; k++){
        long long sum = nums[i] + nums[j];
        sum += nums[k];
        long long fourth = target - sum; 
        if(hashSet.find(fourth) != hashSet.end()){
          vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};
          sort(temp.begin(), temp.end());
          st.insert(temp);
        }
          hashSet.insert(nums[k]);
      }
    }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}
*/

//Optimized Solution
vector<vector<int>> fourSum(vector<int>& nums, int target){
  sort(nums.begin(), nums.end());
  vector<vector<int>> ans;
  int n = nums.size();
  int i = 0;

  while(i < n){
    if( i != 0 && nums[i] == nums[i -1] ){
      i++;
      continue;
    }
    int j = i + 1;
    while(j < n){
      if( j !=i + 1 && nums[j] == nums[j - 1]){
        j++;
        continue;
      }

      int k = j + 1, l = (n - 1);
      
      while(k < l){
        long long sum = nums[i] + nums[j];
        sum += nums[k];
        sum += nums[l];

        if(sum == target){
          ans.push_back({nums[i], nums[j], nums[k], nums[l]});

          k++, l--;

          while(nums[k] == nums[k - 1] && k < l) k++;
          while(nums[l] == nums[l + 1] && k < l) l--;
        }
        else if( sum < target){
          k++;
        }else{
          l--;
        }
      }
      j++;
    }
    i++;
  }
  
  return ans;
}

int main() {
  vector<int> nums = {1,0,-1,0,-2,2};

  vector<vector<int>> res = fourSum(nums, 0);

  for(auto i: res){
   for(auto j : i){
      cout << j << " ";
   }cout << endl;
  }
}