#include <algorithm>
#include<bits/stdc++.h>
#include <functional>
#include <utility>
using namespace std;

    bool comp(pair<int, int> p1, pair<int,int> p2){
        if(p1.second < p2.second) return true;
        if(p1.second > p2.second) return false;

        if(p1.first > p2.first) return true;
        return false;
    };
int main() {    
 
    
    pair<int, int> p[] = { {1, 2}, {4, 2}, {8, 5}, {10, 1} };

    int size = sizeof(p)/sizeof(p[0]);

    sort(p, p + size, comp);
    /*
        Desired output :
        {4, 2} {1, 2} {8, 5s}
    */
    for(auto i : p){
        cout << i.first << " " << i.second << "  ";
    }

    return 0;
}
