#include<iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    int hash[26] = {0};
    //pre compute
    for(int i = 0; i < s.size(); i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;

    while(q--){
        char c;
        cin >> c;
        
        //fetching the hash
        cout << hash[c - 'a'] << endl;
    }

    return 0;
}