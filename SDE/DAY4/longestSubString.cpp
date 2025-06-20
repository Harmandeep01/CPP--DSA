#include<bits/stdc++.h>

using namespace std;

//Brute


/*
//Optimal
int lengthOfLongestSubstring(string s) {
    int longest = 0;
        int cnt = 0;
    int n = s.length();
    vector<int> mpp(256, -1);
    int left = 0;
    for(int right = 0; right < n; right++){

        if(mpp[s[right]] != -1) left = max(mpp[s[right]] + 1, left);
        
        mpp[s[right]] = right;
        cout << mpp[s[right]];
        cout << left << endl;
        longest = max(longest, right - left + 1);
    }
    return longest;
}
*/
int main(){

    string s = "pwwkew"; 
    cout << lengthOfLongestSubstring(s);
    
    return 0;
}