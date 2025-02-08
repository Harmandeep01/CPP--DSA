#include<iostream>

using namespace  std;

int main(){
    
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

   //pre compute 

   int hash[1000000] = {0};
   for(int i = 0; i < n; i++){
    hash[arr[i]] += 1;
   } 

   //fetching
   int q;
   cin >> q;
   while(q--){
    int number;
    cin >> number;
    cout << hash[number] << " ";
   }

    return 0;
}