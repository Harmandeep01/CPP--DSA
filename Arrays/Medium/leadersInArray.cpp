#include<bits/stdc++.h>

using namespace std;

vector<int> leaders(vector<int>& arr) {
    int maxi = INT_MIN;
    vector<int> res;
   for(int i = arr.size() - 1; i >= 0; i--){
      if(arr[i] >= maxi){
          maxi = arr[i];
          res.push_back(maxi);
      }
   }
   reverse(res.begin(), res.end());
   return res;
}


int main(){

    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> res = leaders(nums);

    for(auto i : res){
        cout << i << " ";
    }cout << endl;
    return 0;
}