#include<bits/stdc++.h>

using namespace std;

//{4, 5, 3, 9, 8} --> {3, 9, 8, 4, 5}

void leftRotateDynamic(vector<int>& arr, int k){
//     int n = arr.size();
//     k = k % n;  //for reducing operations (k = k(15) % 2) =>k = 1;
//    for(int i = 0; i < k; i++){
//     int temp = arr[n - 1];
//     for(int j = n - 1; j >= 0; j--){
//         arr[j] = arr[j - 1];
//     }
//     arr[0] = temp;
//    }
    //OR
    // arr[arr.size() - 1] = temp;

      int n = arr.size();
        k = k % n;
    
        vector<int> temp(k);


        for(int i = 0; i < k; i++){
            temp[i] = arr[(n - k) + i];
        }

        // for(int j = k; j < n; j++){
        //     arr[j] = arr[j - k];
        // }

        temp.insert(temp.begin() + k, arr.begin(), arr.end() - k );

        arr = temp;
}   

//TC : O(n)
//SC : O(n) // for extra space O(n) because we didn't take any extra space

int main(){ 

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    leftRotateDynamic(nums, k);
    for(auto i : nums){
        cout << i << " ";
    }cout << endl;

    return 0;
}