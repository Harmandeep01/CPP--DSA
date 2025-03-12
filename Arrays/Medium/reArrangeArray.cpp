#include<bits/stdc++.h>

using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int pos = 0, neg = 1;
    vector<int> ans (nums.size(), 0);

    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < 0){
            ans[neg] = nums[i];
            neg += 2;
        }else{
            ans[pos] = nums[i];
            pos += 2;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {3,1,-2,-5,2,-4};
    vector<int> res = rearrangeArray(arr);

    for(auto it : res){
        cout << it << " ";
    }cout << endl;
    return 0;
}