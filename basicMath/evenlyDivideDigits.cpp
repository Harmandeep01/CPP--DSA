#include<iostream>

using namespace std;


int evenlyDivides(int n) {
    int originalNumber = n;
        int noOfDigits = 0;
        while(n > 0){
            int extractedDigit = n % 10;
            if(originalNumber % extractedDigit == 0 && extractedDigit != 0){
                noOfDigits += 1;
            }
            n = n / 10;
        }
        return noOfDigits;
}

int main(){
cout << evenlyDivides(39);
    return 0;
}