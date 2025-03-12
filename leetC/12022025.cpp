#include<bits/stdc++.h>

using namespace std;
 int sumOfDigits(int number) {
        int sum = 0;
        while (number > 0) {
            sum += number % 10;
            number /= 10;
        }
        return sum;
    }

    int maximumSum(vector<int>& nums) {
        int maxSum = -1;
        int n = nums.size();
        
        // Precompute sum of digits for each number
        vector<int> digitSums(n);
        for (int i = 0; i < n; i++) {
            digitSums[i] = sumOfDigits(nums[i]);
        }

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) { // Avoid duplicate pairs
                if (digitSums[i] == digitSums[j]) {
                    int temp = nums[i] + nums[j];
                    maxSum = max(maxSum, temp);
                }
            }
        }
        
        return maxSum;
    }

int main(){
    vector<int> nums = {18, 43, 36, 13, 7};
    cout << maximumSum(nums);
    return 0;
}