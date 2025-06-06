#include <iostream>
#include <vector>

using namespace std;

int MooresAlgo(vector<int>arr){
    int n = arr.size();
    if(n == 0) return 0;
    
    int majority = n / 2;
    int element = arr[0];
    int cnt = 0;

    for(int i = 0; i < n; i++){
        if(cnt == 0){
            cnt = 1;
            element = arr[i];
        }else if(element == arr[i]){
            cnt++;
        }else{
            cnt--;
        }
    }
    cnt = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == element) cnt++;
    }
    if(cnt > majority) return element;

    return -1;
    
}

int main() {
    vector<int>arr = {7,7,5,7,51,5,7,5,5,7,7,5,5,5,5};
    int res = MooresAlgo(arr);
    cout << res;
    return 0;
}