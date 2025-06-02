#include<bits/stdc++.h>

using namespace std;

//Hashing (brute force)
/* vector<int> missingNumber(vector<int> arr){
  int n = arr.size();
  vector<int> hash(n+1, 0);
  
  for(int i = 0; i < n; i++){
    hash[arr[i]]++;
  }

  int missing = -1;
  int repeating = -1;
  
  for(int i = 1; i <= n; i++){
    if(hash[i] == 0)   missing = i;
    else if(hash[i] == 2) repeating = i;
    
    if(repeating != -1 && missing != -1){
      break;
    }
  }
  return {repeating, missing};

  //TC: O(2n)
  //SC: O(n)
}
*/

//OPTImal solution 1; using basic maths
vector<int> missingNumber(vector<int>arr){
  int n = arr.size();
  int S = 0;
  int SN =  (n * (n + 1)) / 2;

  int S2 = 0;
  int S2N = (n * (n + 1) * (2 * n + 1)) / 6;

  for(int i = 0; i < n; i++){
    S += arr[i];
    S2 += (int)arr[i] * (int)arr[i];
  }

  //x - y
  int val1 = S - SN;
  int val2 = S2 - S2N;

  //x + y
  val2 = val2 / val1;
  
  int x = (val1 + val2) / 2;
  int y = val2 - x;

  return {x , y};
}

int main(){

  vector<int> nums = {3,5,4,1,1};

  vector<int> res = missingNumber(nums);
  for(auto i : res){
    cout << i << " ";
  }
  // return 0;
}
