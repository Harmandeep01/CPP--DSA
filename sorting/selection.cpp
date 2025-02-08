#include <iostream>

using namespace  std;
/*
    time complexity : O(n^2);
*/

int selectionSort(int arr[], int n){
    
    for(int i = 0; i < n - 1 ; i++){
        int min = i;
        for(int j = i; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
            //swap function method
            // swap(arr[i], arr[min]);
            //OR

            //custom swap operation 

            int temp = arr[min]; //eg: temp = 9
            arr[min] = arr[i];   //eg: arr[5] = arr[0] => 9 becomes 13;  
            arr[i] = temp;       //eg : arr[0] = 9 => 13 becomes 9;
        }
    }

    return *arr;
}

int main(){

    int arr[] = {13, 46, 24, 52, 20, 9};

    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    for(auto i : arr){
        cout << i << " ";
    }cout << endl;

    return 0;
}