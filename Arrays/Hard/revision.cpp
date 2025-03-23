#include<bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> majorityElement(vector<int>& nums){
    
    int n = nums.size();
    int cnt1 = 0, cnt2 = 0;
    int elem1 = 0, elem2 = 0;
    vector<int> ans;

    for(int i = 0; i < n; i++){
        if(nums.size() == 1){
            ans.push_back(nums[i]);
            return ans;
        }
        else if(cnt1 == 0 && nums[i] != elem2){
            cnt1++;
            elem1 = nums[i];
        }else if(cnt2 == 0 && nums[i] != elem1){
            cnt2++;
            elem2 = nums[i];
        }else if(nums[i] == elem1){
            cnt1++;
        }else if(nums[i] == elem2){
            cnt2++;
        }else {
            cnt1--, cnt2--;
        }
    }

    cnt1 = 0, cnt2 = 0;

    for(int i = 0; i < n; i++){
      if(elem1 == elem2){
        ans.push_back(elem1);
        break;
      }
      if(elem1 == nums[i]){
        cnt1++;
      }
      if(elem2 == nums[i]){
        cnt2++;
      }
    }

    if(cnt1 > n/3) ans.push_back(elem1);
    if(cnt2 > n/3) ans.push_back(elem2);

    return ans;

}

int main(){
    vector<int> nums = { 3, 2, 3};
    vector<int> res =  majorityElement(nums);

    for(auto it : res){
        cout << it << " ";
    }cout << endl;

    return 0;
}