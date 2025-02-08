#include<iostream>

using namespace std;

bool checkPalindrome(int i, string &str){

    if(i >= str.size()/2) return true;

    if(str[i] != str[str.size()-1-i]){
        return false;
    }

    return checkPalindrome(i + 1, str);
}

int main(){
    string s = "MADAM";
    cout << boolalpha << checkPalindrome(0, s);
    return 0;
}