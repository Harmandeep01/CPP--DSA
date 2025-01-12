#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

int main() {
 
 int arr[] = {2, 1, 10, 8, 6};
 int size = sizeof(arr) / sizeof(arr[0]);
//  cout << arr << endl;


//Normal Sorting
sort(arr, arr + size);


//We can slice the sorting i.e ; we can choose where to start and where to end;
//  sort(arr + 2, arr + 5);

  for (auto i  :arr) {
    cout << i << endl;
  }
    return 0;
}
