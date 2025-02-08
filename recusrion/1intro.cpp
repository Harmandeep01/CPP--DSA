#include<iostream>

using namespace std;

int counter = 0;
void f(){
    if(counter == 3) return;
    cout << counter << endl;
    counter++;
    f();
}

int main(){
    f();
    return 0;
}