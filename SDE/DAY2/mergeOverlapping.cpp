#include <bits/stdc++.h>
using namespace std;

//Approach 1
vector<vector<int>> mergeOverlapping(vector<vector<int>>& nums){
  int n = nums.size();
  sort(nums.begin(), nums.end());
  vector<vector<int>> temp;
  if(temp.empty()){
    temp.push_back(nums[0]);
  }
  for(int i = 0; i < n; i++){
    if(temp.back()[1] >= nums[i][0]){
      temp.back()[1] = max(nums[i][1], temp.back()[1]);
    }else{
        temp.push_back(nums[i]);
    }
  }
  
  return temp;
}
//Time Complexity:
//( n_log_n) + O(n);

//Space Complexity;
// O(m);

int main() {
 vector<vector<int>> nums = {{1,3}, {2,6}, {8,9}, {9,11}, {8,10}, {2,4}, {15,18}, {16, 17}};
  vector<vector<int>> res = mergeOverlapping(nums);
 for(auto i : res){
    for(auto j : i){
      cout << j << " ";
    }
   cout << endl;
 }
}
