#include<bits/stdc++.h>
#include <map>
using namespace std;

int main() {
   
    /*
    MAP stores Unique keys in SORTED order (something similar to set Data Structure);
        KEY can be of any data type (int, double, pair, etc)
    */

    //Ways to store data in KEY VAl pairs :

    map<int, int> mpp;
    mpp[1] = 2;
    mpp.emplace(3, 4);
    mpp.insert({2, 3});

    // printing
    for(auto i : mpp){
        cout << i.first << " : " << i.second << endl;
    }cout << endl;

    /* The output depends upon Key for sorting not on Value!*/

    //Accessing values by key:
    cout << mpp[1] << endl;
    cout << mpp[3] << endl;

    //accessing by address by using Iterator
    auto it = mpp.find(3);
    cout << "Value of key " << it->first << " : " << it->second << endl; 


    //Lower Bound
    auto itLb  = mpp.lower_bound(1);
    cout << itLb->first << endl;

    //Upper Bound
    auto itUp  = mpp.lower_bound(1);
    cout << itUp->first << endl;


    return 0;
}