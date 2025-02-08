#include<iostream>

using namespace std;
/*
    Normal Method
    void printAllDivisors(int n){
        for(int i = 1; i <= n; i++){
            if(i == n){
                cout << i;
            }else if(n%i == 0){
                cout << i << ", ";
            }
        }
    }

*/

/*sqrt method*/

void checkPrime(int n){
    int counter = 0;
    for(int i = 1; i*i <= n;i++){
        if(n%i == 0){
            counter++;
            if((n/i) != i){
                counter++;
            }
        }
    }
    if(counter != 2){
        cout << n << " is not a prime number" << endl;
    }else{
        cout << n << " is a prime number" << endl;
    }
}

int main(){
    checkPrime(11);
    return 0;
}