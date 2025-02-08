#include<iostream>

using namespace std;

void extractedDigit(int n){
    while (n > 0) {
        int extractedDigit = n % 10;
        cout << extractedDigit << " ";
        n = n / 10;
    }
    cout << endl;
}

int main(){

    extractedDigit(7789);

    

    return 0;
}