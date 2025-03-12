#include<bits/stdc++.h>

using namespace std;

//<--------Brute Force-------->

/*
//Returning Boolean
bool twoSum(vector<int>& nums, int target){

    for(int i = 0; i < nums.size() ; i++){
        for(int j = 0; j < nums.size(); j++){
            if(i == j){
                continue;
            }else if(nums[j] + nums[i] == target){
                return true;
            }
        }
    }

    return false;

}
*/

/*
//Returning Indexes
vector<int> twoSum(vector<int>& nums, int target){

    vector<int> temp;

    for(int i = 0; i < nums.size(); i++){
        for(int j =  i + 1; j < nums.size(); j++){
            if(i == j) continue;
            else if(nums[i] + nums[j] == target){
                temp.push_back(i);
                temp.push_back(j);
                return temp;
            }
        }
    }

    return temp;
}
//TIME COMPLEXITY = O(N^2);
*/


//<--------BETTER SOLUTION/APPROACH-------->

bool twoSum(vector<int>& nums, int target){
    map<int, int> mpp;
    for(int i = 0; i < nums.size(); i++){
        int num = 0;
        num = target - nums[i];

        if(mpp.find(num) != mpp.end()){
            return true;
        }
        else if(mpp.find(nums[i]) == mpp.end()){
            mpp[nums[i]] = i;
        }
    }

    return false;
}


int main(){

    vector<int> nums = {2, 6, 5, 8, 11};
    int target = 19;
    cout << boolalpha << twoSum(nums, target);
    // vector<int> res = twoSum(nums, 14);
    // for(auto it : res){
    //     cout << it << " ";
    // }cout << endl;

    return 0;
}