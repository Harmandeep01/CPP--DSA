#include <bits/stdc++.h>
using namespace std;

//Approach 1
/* void mergeTwoSorted(vector<int>& arr1, vector<int>& arr2){

  long unsigned int left = 0 ;
  long unsigned int right = 0;

  vector<int> temp;
  
  while(left < arr1.size() && right < arr2.size()){
    if(arr1[left] <= arr2[right]){
      temp.push_back(arr1[left]);
      left++;
    }else{
      temp.push_back(arr2[right]);
      right++;
    }
  }

  while(left < arr1.size()){
    temp.push_back(arr1[left]);
    left++;
  }
  while(right < arr2.size()){
    temp.push_back(arr2[right]);
    right++;
  }
  
  for(long unsigned int i = 0; i < temp.size(); i++){
     if(i < arr1.size()) arr1[i] = temp[i];
     else arr2[i - arr2.size() + 1] = temp[i];
   }
}
*/

//Approach 2
 void mergeTwoSorted(vector<int>& arr1, vector<int>& arr2){
   int left = arr1.size() - 1;
   int right = 0;
   while(left >= 0 && right < arr2.size()){
     if(arr1[left] > arr2[right]){
       swap(arr1[left], arr2[right]);
       left--; right++;
     }else{
       break;
     }
   }

   sort(arr1.begin(), arr1.end());
   sort(arr2.begin(), arr2.end());
 }

//Time Complexity:
// O(min(n, m));

//Space Complexity;
// O(1);

int main() {
 vector<int> nums1 = {1,3,5,7};
  vector<int> nums2 = {0,2,6,8,9};
 mergeTwoSorted(nums1, nums2);
  for(auto i : nums1){
    cout << i << " ";
  }
  for(auto i : nums2){
    cout << i << " ";
  }
}
