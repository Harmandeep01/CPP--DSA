#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Approach 1 using Hash Method
int findDuplicate(vector<int>& arr){
  int n = arr.size();
  int ans = -1;

  vector<int>hash (n,0);

  for(int i = 0; i < n; i++){
      hash[arr[i]]++;
      if(hash[arr[i]] >= 2){
        ans = arr[i];
        break;
      }
  }
    
  return ans;
}

//Approach 2 : Linked List Cyclic Method
int findDuplicateOptimal(vector<int>& arr){
  int slow = arr[0];
  int fast = arr[0];

  do{
    slow = arr[slow];
    fast = arr[arr[fast]];
  }while(slow != fast);

  fast = arr[0];
  while(slow != fast){
    slow = arr[slow];
    fast = arr[fast];
  }
  return slow;
  
}

int main() {
  vector<int> nums = {2,5,9,6,9,3,8,9,7,1};
  int res = findDuplicateOptimal(nums);
  cout << res << endl;
  return 0;
}