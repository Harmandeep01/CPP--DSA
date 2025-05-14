
#include<bits/stdc++.h>

using namespace std;



int maxSubArray(vector<int>& nums) {
    int sum = 0, maxi = INT_MIN;

    for(int i = 0; i < nums.size(); i++){
        sum += nums[i];

        maxi = max(sum, maxi);
        if(sum < 0) sum = 0;
    }

    return maxi;
}

int main(){
    
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    
    cout << maxSubArray(arr);

    return 0;
}