#include<bits/stdc++.h>

using namespace std;

/*
//BRUTE FORCE
// Time Complexity => O(n^3) * n log n (for st data structure)
//Space Complexity => 2 * O(no. of elements)
vector<vector<int>> threeSum(vector<int>& nums){
  int n = nums.size();
  set<vector<int>> st;
  
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      for(int k = j + 1; k < n; k++){
        if(nums[i] + nums[j] + nums[k] == 0){
          vector<int> temp = {nums[i], nums[j], nums[k]};
          sort(temp.begin(), temp.end());
          st.insert(temp);
        }
      }
    }
  }

  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}
*/

//Better Solution
//Time Complexity => O(n^2) * log m (no. of variables)
//Space Complexity => O(n) + O (no. of sets) * 2; 2 because we are copying same set into vector to return
vector<vector<int>> threeSum(vector<int>& nums){
  int n = nums.size();
  set<vector<int>> st;

  for(int i = 0; i < n; i++){
    
    set<int> hash;
    for(int j = i + 1; j < n; j++){

      int k = -( nums[i] + nums[j] );
      if(hash.find(k) != hash.end()){
  
          vector<int> temp = {nums[i], nums[j], k};
          sort(temp.begin(), temp.end());
          st.insert(temp);

      }
      hash.insert(nums[j]);
    }
  }

  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

int main() {
  vector<int> nums = {-1,0,1,2,-1,-4};
  vector<vector<int>> res = threeSum(nums);

  for(auto i : res){
    for(auto j : i){
      cout << j << " ";
    }cout << endl;
  }
}