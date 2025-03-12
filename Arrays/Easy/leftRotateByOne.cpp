#include<bits/stdc++.h>

using namespace std;

//{4, 5, 3, 9, 8} --> {5, 3, 9, 8, 4}

void leftRotate(vector<int>& arr){
    int temp = arr[0];  //temp =  4
    for(int i = 1; i < arr.size(); i++){
        arr[i - 1] = arr[i];
    }
    arr.insert(arr.end() - 1, temp);
    arr.pop_back();
    //OR
    // arr[arr.size() - 1] = temp;
}

//TC : O(n)
//SC : O(n) // for extra space O(n) because we didn't take any extra space

int main(){ 

    vector<int> nums = {4, 5, 3, 9, 8};

    leftRotate(nums);
    for(auto i : nums){
        cout << i << " ";
    }cout << endl;

    return 0;
}