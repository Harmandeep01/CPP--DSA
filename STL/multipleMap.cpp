#include<bits/stdc++.h>
#include <map>
using namespace std;

int main() {
  /*
   multi Map
   It can store Duplicate keys in *Sorted* Manner
  */

  multimap<int , int> mulMap;

  mulMap.insert({1, 2});
  mulMap.insert({1, 5});

  for(auto i : mulMap){
    cout << i.first << " " << i.second << endl;
  }

  
    return 0;
}
