
#include<bits/stdc++.h>

using namespace std;

int findSmallest(vector<int>& arr){
        int n = arr.size();
        int smallest = arr[0];
        int smallest_index = 0;
        
        for(int i = 0; i < n; i++){
            if(arr[i] < smallest){
                smallest = arr[i];
                smallest_index = i;
            }
        }
    return smallest_index;
}

vector<int> selectionSort(vector<int>& nums){
    int n = nums.size();
    vector<int> ans;
    
    for(int i = 0; i < n; i++){
        int smallest_index = findSmallest(nums);
        ans.push_back(nums[smallest_index]);
        nums.erase(nums.begin() + smallest_index);
    }
    return ans;
}

int main()
{
   vector<int> nums = {5, 3, 6, 2, 10};
   
   vector<int> res = selectionSort(nums);
   
   for(int i : res){
       cout << i << " ";
   }

    return 0;
}