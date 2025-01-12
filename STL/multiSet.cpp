#include<bits/stdc++.h>
#include <set>
using namespace std;

int main() {
   
    multiset<int> mulSet;

    mulSet.insert(1); // {1}
    mulSet.insert(1); // {1, 1}
    mulSet.insert(1); // {1, 1, 1}

    /* 
        mulSet.erase(1);  //--> This erases all the 1s in the Multiple Set
        to handle that; we uses Address instead of value
        as we know ; find() function returns address of found item/value.
        Here is example : 
    */ 

    mulSet.erase(mulSet.find(1)); //This will remove/erase the '1' from the position of element where it's found!

    // cout << *mulSet.begin() << endl; 
    return 0;
}
