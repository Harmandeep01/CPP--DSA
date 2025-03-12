#include<bits/stdc++.h>

using namespace std;
/*

    this is brute force approach 
int uniqueElements(vector<int>& arr){
    set<int> st;
    for( int i = 0; i < arr.size(); i++){
        st.insert(arr[i]);
    }

    int index = 0;
    for(auto i : st){
        arr[index] = i;
        index++;
    }
    return index;
}
*/

//this is optimal approach : 2 pointer approach

int uniqueElementsvector(vector<int>& arr){
    int i = 0;
    for(int j = 1; j < arr.size(); j++){
        if(arr[j] != arr[i]){
            i++;
        }
    }
    return i;
}


int main(){

    vector<int> nums = {1, 1, 2, 2, 4, 5, 4, 5};
    cout << "Unique elements are " << uniqueElementsvector(nums);

    return 0;
}