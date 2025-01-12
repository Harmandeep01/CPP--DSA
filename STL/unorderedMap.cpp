#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
  /*
   Unordered Map
   It can store Unique keys in an *UnSorted* Manner

   TIME COMPLEXITY : O(1)
  */

    unordered_map<int,int> umap;
    umap.insert({2, 4});
    umap.insert({1, 5});
    umap.insert({3, 5});
    umap.insert({8, 5});
    umap.insert({10, 5});

    for(auto i : umap){
        cout << i.first << " : " << i.second << endl;
    }

  
    return 0;
}
