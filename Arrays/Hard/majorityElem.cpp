#include<bits/stdc++.h>
#include <unordered_map>

using namespace std;

//Brute Force
vector<int> majorityElement(vector<int>& nums){
    int n = nums.size();
    // cout << n/3;
    vector<int> ls;
    unordered_map<int,int> mpp;
    for(int i = 0; i < nums.size(); i++){
        mpp[nums[i]]++;
        if (mpp[nums[i]] > n / 3) {
            if (ls.empty() || (ls.size() == 1 && ls[0] != nums[i])) {
                ls.push_back(nums[i]);
            }
        }
        if(ls.size() == 2){
            break;
        }
    }
    return ls;
}

//Optimal Solution
vector<int> majorityElementOptimal(vector<int>& nums){
    vector<int> ans;
    int cnt1 = 0, cnt2 = 0;
    int element1 = 0, element2 = 0;
    for(int i =  0; i < nums.size(); i++){
        if(cnt1 == 0 && nums[i] != element2){
            cnt1++;
            element1 = nums[i];
        }else if(cnt2 == 0 && nums[i] != element1){
            cnt2++;
            element2 = nums[i];
        }else if(element1 == nums[i]) cnt1++;
        else if(element2 == nums[i]) cnt2++;
        else{
            cnt1--, cnt2--;
        }
    }
    
    cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < nums.size(); i++){
     if(nums[i] == element1) cnt1++;
     if(nums[i] == element2) cnt2++;
    }

    if(cnt1 > nums.size()/3) ans.push_back(element1);
    if(cnt2 > nums.size()/3) ans.push_back(element2);

    return  ans;

}

int main(){

    //Brute Fore
    vector<int> nums = {3, 2, 3};
    vector<int> res =  majorityElementOptimal(nums);

    for(auto it : res){
        cout << it << " ";
    }cout << endl;

    return 0;
}