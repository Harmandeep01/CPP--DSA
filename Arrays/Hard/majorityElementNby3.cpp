#include<bits/stdc++.h>

using namespace std;

//Brute Force
int majorityElementNby3(vector<int> &nums){
    int n = nums.size();
    int cnt = 0;
    vector<int> ls;
    for(int i = 0; i < n; i++){
        if(ls.size() == 0 || ls[0] != nums[i]){
            cnt = 0;
        }
            for(int j = i + 1; j < n; j++){
                if(nums[i] == nums[j]){
                    cnt++;
                }
                if(cnt > n/3){
                    ls.push_back(nums[i]);
                }
            }
        }
        if(ls.size() == 2){
            break;
        }
    }
    
}

int main(){
  vector<int> nums = {1,1,1, 3, 3, 2, 2, 2};
    cout << majorityElementNby3(nums);
    return 0;
}