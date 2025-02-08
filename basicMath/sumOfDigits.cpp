#include<iostream>

using namespace std;


int sumOfDigits(int n) {
       int result = 0;
       while(n > 0){
           int extractedNum = n % 10;
           result += extractedNum;
           n = n / 10;
       }
       return result;
}

int main(){
cout << sumOfDigits(6523);
    return 0;
}