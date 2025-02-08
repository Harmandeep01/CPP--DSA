#include<iostream>

using namespace std;
//printing name by resucsd
// void print(int i, int n){
//     if(i < 1 ) return;
//     cout << i << endl;
//     print(i-1,n);

// }


//Backtarcking
void backtarckingRescursion(int i, int n){
    if(i <= 0) return;

    backtarckingRescursion(i - 1, n);
    cout << i << " ";

}
int main(){
    backtarckingRescursion(30, 30);
}