#include<iostream>
#include <map>

using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    map<int, int> mpp;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
   
    int q;
    cin >> q;

    // for(auto i : mpp){
    //     cout << i.first << "->" << i.second << endl;
    // }
    while(q--){
        int number;
        cin >> number;
        
        //fetching the hash map
        cout << mpp[number] << endl;
        
    }

    return 0;
}