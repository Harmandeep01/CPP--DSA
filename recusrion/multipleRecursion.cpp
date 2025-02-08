#include<iostream>

using namespace std;


    // Fibbonacci Series
    int fibbonacciSeries(int n){
        if(n <= 1) return n;

        int last = fibbonacciSeries(n - 1);
        int sLast = fibbonacciSeries(n - 2);

        return last + sLast; 

    }

int main(){

    cout << fibbonacciSeries(4);
    return 0;
}