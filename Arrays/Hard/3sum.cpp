#include <algorithm>
#include<bits/stdc++.h>
#include <set>
#include <vector>

using namespace std;

//Brute Force
vector<vector<int>> ThreeSum(vector<int>& nums){
    set<vector<int>> st;
    int n = nums.size();
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

//Better Solution
vector<vector<int>> ThreeSumBetter(vector<int>& nums){
    set<vector<int>> st;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        set<int> hashSet;
        for(int j = i + 1; j < n; j++){
            int k = - (nums[i] + nums[j]);

            if(hashSet.find(k) != hashSet.end()){
                vector<int> temp = {nums[i], nums[j], nums[k]};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }

            hashSet.insert(nums[j]);
        }
    }

    vector<vector<int>> ans(st.begin(), st.end());
    
    return ans;
}

//Optimal Solution
vector<vector<int>> ThreeSumOptimal(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> ans;
    sort(nums.begin(), nums.end());

    for(int i = 0; i < n; i++){
       if(i > 0 && nums[i] == nums[i-1]) continue;
        int j = i + 1;
        int k = n - 1;

        while(j < k){
            int sum = nums[i] + nums[j] + nums[k];
            if(sum < 0){
                j++;
            }else if(sum > 0){
                k--;
            }else{
                vector<int> temp = {nums[i], nums[j], nums[k]};
                ans.push_back(temp);
                j++;
                k--;

                while(j < k && nums[j] == nums[j-1]) j++;
                while(j < k && nums[k] == nums[k+1]) k--;
            }
        }
    }
    return ans;
}

int main(){

    vector<int> nums = {-2,0,1,1,2};
    vector<vector<int>> res = ThreeSumOptimal(nums);
    
    for(auto i : res){
        for(auto j : i){
            cout << j << " ";
        }cout << endl;
    }

    return 0;
}