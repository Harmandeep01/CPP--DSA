#include<bits/stdc++.h>
#include <climits>

using namespace std;

int SecondLargest(vector<int>& arr, int n){
   int SLargest = -1;
   int largest = arr[0];
   for(int i = 1; i < n; i++){
    if(arr[i] > largest ){
        SLargest = largest;
        largest = arr[i];
    }else if(arr[i] < largest && arr[i] > SLargest){
        SLargest = arr[i];
    }
   }
   return SLargest;
}

int SecondSmallest(vector<int>& arr, int n){
    int sSmallest = INT_MAX;
    int smallest = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < smallest){
            sSmallest = smallest;
            smallest = arr[i];
        }else if(arr[i] != smallest && arr[i] < sSmallest){
            sSmallest = arr[i];
        }
    }
    return sSmallest;
}

int main(){ 

    vector<int> arr = { 5, 20, 1, 5, 6};

    cout << "Second Largest : " << SecondLargest(arr, arr.size()) << endl;
    cout << "Second Smallest : " << SecondSmallest(arr, arr.size()) << endl;
    return 0;
}