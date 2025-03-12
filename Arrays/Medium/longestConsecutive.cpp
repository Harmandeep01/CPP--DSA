#include<bits/stdc++.h>

using namespace std;

int longestConsecutive(vector<int>& nums) {
    int longest = 1;
  unordered_set<int> st;
  if(nums.size() == 0) return 0;
    for(int i = 0; i < nums.size(); i++){
      st.insert(nums[i]);
    }


  for(auto it : st){
      if(st.find(it - 1) == st.end()){
          int x = it;
          int cnt = 1;
          while(st.find(x + 1) != st.end()){
              cnt++;
              x++;
          }
          longest  = max(longest, cnt);
      }
  }
  
  return longest;
  }

int main(){

    vector<int> arr = {100,4,200,1,3,2};
    cout << longestConsecutive(arr);

    return 0;
}