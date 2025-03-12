#include<bits/stdc++.h>

using namespace std;

int majorityElement(vector<int>& nums) {
    int cnt = 0;
    int element = nums[0];

    for(int i = 0; i < nums.size(); i++){
        if(cnt == 0){
            cnt = 1;
            element = nums[i];
        }else if(nums[i] == element) cnt++;
        else cnt--;
    }
    
return element;
}

int main(){

    vector<int> arr = {2,2,1,1,1,2,2};
    cout << majorityElement(arr);

    return 0;
}