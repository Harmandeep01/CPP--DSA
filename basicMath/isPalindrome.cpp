#include <climits>
#include<iostream>

using namespace std;

bool isPalindrome(int x) {
        long duplicate = x;
        long revNum = 0;
        bool isPalindrome = false;
        while(x != 0){
            int lastDigit = x % 10;

            revNum = (revNum * 10) + lastDigit;

            x/= 10;
        }
        if(revNum > INT_MAX || revNum < INT_MIN){
            isPalindrome = false;
        }else if(revNum == duplicate){
            isPalindrome = true;
        }

        return isPalindrome;
    }

int main(){

    cout << boolalpha << isPalindrome(-121);


    return 0;
}