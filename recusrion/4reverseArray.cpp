#include<iostream>
#include <utility>

using namespace std;

/*Two Pointer Method
    void swapArray(int arr[], int l, int r){
        if(l >= r) return;

        swap(arr[l], arr[r]);

    swapArray(arr, l+1, r-1);

   }
*/

    // Single Pointer Method
    void reverseArray(int i, int arr[], int n){
        if(i >= n/2) return;

        swap(arr[i], arr[n-i-1]);

        reverseArray(i+1, arr, n);
    }
int main(){
    int arr[] = {2,5,8,7, 9, 5, 10,114};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverseArray(0, arr, n );

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}