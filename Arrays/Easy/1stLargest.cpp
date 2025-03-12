#include<bits/stdc++.h>

using namespace std;

void Largest(vector<int>& arr, int n){
    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i]; 
        }
    }
    cout << "Largest element is " << max << endl;
}

int main(){ 

    vector<int> arr = { 5, 20, 1, 5, 6};

    Largest(arr, arr.size());

    return 0;
}