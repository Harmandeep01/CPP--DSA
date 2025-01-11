#include <algorithm>
#include<bits/stdc++.h>
#include <deque>
#include <functional>
#include <queue>
#include <vector>
using namespace std;

int main() {
    

    // MAX HEAP
    priority_queue<int> pq;
    pq.push(1);
    pq.push(3);
    pq.push(7);
    pq.emplace(10);

    cout << pq.top() << endl;


    //MIN HEAP
    priority_queue<int, vector<int>, greater<int>> minPQ;

    minPQ.push(20);
    minPQ.push(5);
    minPQ.push(8);
    minPQ.emplace(10);

    cout << minPQ.top();

    /*Time Complexities
        push() --> log(n);
        pop() ---> log(n);
        top() ---> big Oh(n);
    */


    return 0;
}
