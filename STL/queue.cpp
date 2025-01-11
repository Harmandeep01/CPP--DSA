#include<bits/stdc++.h>
#include <deque>
#include <queue>
using namespace std;

int main() {
   
   queue<int> q;
   q.push(0);
   q.push(1);
   q.push(2);
   q.emplace(3);


   cout << q.back() << endl;
   //adding 2 to last element (3);

   q.back() += 2;       //now 3 becomes 5 (3 + 2);
   cout << q.back() << endl;

    //printing and removing (pop()) front element
    cout << q.front() << endl;      //prints 0 (zero)
    q.pop();                        //removes 0 (zero)
    cout << q.front() << endl;      //prints 1 after removing 0 (zero)


    return 0;
}
