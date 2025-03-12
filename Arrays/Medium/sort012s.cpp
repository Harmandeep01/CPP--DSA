#include<bits/stdc++.h>
#include <utility>
#include <vector>

using namespace std;

//better
/*
vector<int> sortZeroOneTwo(vector<int>& arr){
    int cnt = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0) cnt++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }

    for(int i = 0; i < cnt; i++){
        arr[i] = 0;
    }
    for(int i = cnt; i < cnt + cnt1; i++){
        arr[i] = 1;
    }
    for(int i = cnt + cnt1; i < arr.size(); i++){
        arr[i] = 2;
    }

    return arr;
}
*/

//optimised solution
vector<int> sortZeroOneTwo(vector<int> arr){

    int low = 0, mid = 0, high = arr.size() - 1;

    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[mid], arr[low]);
            mid++, low++;
        }else if(arr[mid] == 1) mid++;
        else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
                high--;
        }
    }

    return arr;
}
int main(){

    vector<int> nums = {0, 1, 2, 0, 1, 2, 1, 2, 0, 0, 1};
    vector<int> res = sortZeroOneTwo(nums);

    for(auto it : res){
        cout << it << " ";
    }cout << endl;
    return 0;
}