#include<bits/stdc++.h>

using namespace std;

//better solution
int missingNum(vector<int>& nums){
    int n = nums.size();
    vector<int> hash(n + 1, 0);

    for(auto it : nums){
        hash[it] = 1;
    }

    for(int i = 0; i <= n; i++){
        if(hash[i] == 0) return i;
    }

    return -1;
}

//first Optimal Solution;
int missingNumber(vector<int>& nums){
    int summasion = (nums.size() * (nums.size() + 1))/2;
    int finalSum = 0;
    for(int i = 0; i < nums.size(); i++){
        finalSum += nums[i];
    }

    return summasion - finalSum;
}

//second optimal solution
int xorMissing(vector<int>& nums){
        int xor1 = 0;
        int xor2 = 0;
        for(int i = 0; i < nums.size(); i++){
            xor1 ^= (i + 1);
            xor2 ^= nums[i];
        }
        return xor1 ^ xor2;
}

int main(){

    vector<int> nums = {0, 1, 2, 4, 5};
    cout << xorMissing(nums);
    return 0;
}