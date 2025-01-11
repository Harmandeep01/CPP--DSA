#include<bits/stdc++.h>
#include <deque>
#include <set>
using namespace std;

int main() {
   
    /*
        Sorted
        AND
        Unique
    */

    set<int> s;
    s.insert(1);
    s.insert(6);
    s.insert(4);
    s.emplace(4);
    s.insert(3);

    auto it = s.find(3);
    s.erase(it);
    



    return 0;
}
