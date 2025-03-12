#include <algorithm>
#include<bits/stdc++.h>
// #include <iterator>

using namespace std;

/*
    Function: leftRotate
    --------------------
    Rotates the given array to the left by `d` positions using the reversal algorithm.
    
    Parameters:
        - arr: Reference to a vector of integers (input array)
        - d: Number of positions to rotate the array
    
    Explanation:
        - Step 1: Reverse the first `d` elements -> [4, 3, 2] -> [2, 3, 4]
        - Step 2: Reverse the remaining `n-d` elements -> [1, 6, 2] -> [2, 6, 1]
        - Step 3: Reverse the entire array -> [2, 6, 1, 4, 3, 2] -> [1, 6, 2, 4, 3, 2]

    Time Complexity: **O(n)** (Since we perform three reversals, each taking O(n))
    Space Complexity: **O(1)** (No extra space is used, only in-place modifications)
*/

//arr = {4, 3, 2, 1, 6, 2}
//K = 3
//output = 1 6 2 4 3 2;

void leftRotate(vector<int>& arr, int d){
    d = d % arr.size();
    reverse(arr.begin(), arr.begin() + d);
    reverse(arr.begin() + d, arr.end());
    reverse(arr.begin(), arr.end());
}

int main(){ 

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    leftRotate(nums, k);
    for(auto i : nums){
        cout << i << " ";
    }

    return 0;
}