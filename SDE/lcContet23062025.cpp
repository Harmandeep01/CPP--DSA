

#include<bits/stdc++.h>

using namespace std;
bool isPrime(int x){
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
bool checkPrimeFrequency(vector<int>& nums) {
    int n = nums.size();
    bool ans = false;
    
    vector<int> hashVec(n + 1, 0);
    for(int i = 0; i < n; i++){
        hashVec[nums[i]]++;
    }
    for(int i = 0; i <=n ;i++){
        if (isPrime(hashVec[i])) {
            ans =  true;
        }
    }
    return ans;
}
int main(){
    vector<int> nums = {1,2,3,4,5,4};
    bool ans = checkPrimeFrequency(nums);
    cout << boolalpha << ans;
    return 0;
}