#include<iostream>
#include <map>

using namespace std;

int main(){

    string s;
    cin >> s;

    map<char, int> mpp;
    //pre compute
    for(int i = 0; i < s.size(); i++){
        mpp[s[i]]++;
    }

    int q;
    cin >> q;

    while(q--){
        char c;
        cin >> c;
        
        //fetching the hash
        cout << mpp[c] << endl;
    }

    return 0;
}