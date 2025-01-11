#include<bits/stdc++.h>
using namespace std;

int main() {
   
   list<int> ls;

    ls.push_back(2);
    ls.emplace_back(3);

    ls.push_front(1);
    ls.emplace_front(0);


    /*Rest functions are same as vector
    begin, end, rbegin, rend, insert, size, swap, etc*/


    //for loop for printing elements
    for(auto i : ls){
        cout << i << " ";
    }cout << endl;

    return 0;
}
