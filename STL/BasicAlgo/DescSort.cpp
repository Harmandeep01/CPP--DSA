#include <algorithm>
#include<bits/stdc++.h>
#include <functional>
using namespace std;

int main() {
 
 int arr[] = {2, 1, 10, 8, 6};
 int size = sizeof(arr) / sizeof(arr[0]);
//  cout << arr << endl;


/*
    Normal Descending Sorting
    the greater<int>() is comparison logic which tells the 
    compiler to sort the array by Size from 
    Greater to Lesser
*/
sort(arr, arr + size, greater<int>());


//We can slice the sorting i.e ; we can choose where to start and where to end;
//  sort(arr + 2, arr + 5 , greater<int>());

  for (auto i  :arr) {
    cout << i << endl;
  }
    return 0;
}
