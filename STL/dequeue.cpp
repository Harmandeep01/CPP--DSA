#include<bits/stdc++.h>
#include <deque>
using namespace std;

int main() {
   
    deque<int> dq;
    dq.push_back(2);
    dq.emplace_back(3);

    dq.push_front(1);
    dq.emplace_front(0);
    dq.pop_front();
    dq.pop_back();
    dq.back();
    dq.front();
    
     /*Rest functions are same as vector
    begin, end, rbegin, rend, insert, size, swap, etc*/



    return 0;
}
