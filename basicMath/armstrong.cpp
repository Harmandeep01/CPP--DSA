#include <climits>
#include <cmath>
#include<iostream>

using namespace std;

bool armstrong(int x) {
    int digits = 0;
    int original = x;
    long sum = 0;

    int temp = x;
    while (temp !=0) {
        digits++;
        temp/= 10;
    }

    temp = x;
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);

        temp/= 10;
    }

    return sum == original;;
}
int main(){

    cout << boolalpha << armstrong(93084);


    return 0;
}