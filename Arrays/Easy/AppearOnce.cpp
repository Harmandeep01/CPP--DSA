#include<bits/stdc++.h>
#include <map>

using namespace std;

//brute force
int appearOnce(vector<int>& nums){
    for(int i = 0; i < nums.size(); i++){
        int cnt = 0;
        for(int j = 0; j < nums.size(); j++){
            if(nums[j] == nums[i]){
                cnt++;
            }
        }
        if(cnt == 1) return nums[i];
    }

    return -1;
}

//better solution using hashing
int APpearOnceHash(vector<int>& nums){
    int maxi = nums[0];
    for(int i = 0; i < nums.size(); i++){
        maxi = max(maxi, nums[i]);
    }

    vector<int> hash(maxi + 1, 0);
    for(auto it : nums){
        hash[it]++;
    }

    for(int i = 0; i <= nums.size(); i++){
        if(hash[nums[i]] == 1) return nums[i];
    }

    return -1;
}

int appearOnceMap(vector<int>& nums){
    map<long long,int> mpp;
    for(int i = 0; i < nums.size(); i++){
       mpp[nums[i]]++;
    }

    for(auto it : mpp){
        if(it.second == 1) return it.first;
    }
    return -1;
}

//optimal
int xorOnce(vector<int>& nums){
    int xorr = 0;
    for(int i = 0; i < nums.size(); i++){
        xorr = xorr ^ nums[i];
    }

    return xorr;
}

int main(){

    vector<int> nums = {1, 1, 2, 3, 3};
    cout << appearOnceMap(nums);
    
    return 0;
}