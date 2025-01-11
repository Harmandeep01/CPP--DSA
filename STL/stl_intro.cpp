#include<bits/stdc++.h>
#include <utility>
using namespace std;

int main() {
    /*getting input
        int a;
        ifstream inputFile("input.txt");
        if (!inputFile) {
            cerr << "Error opening file!" << endl;
            return 1;
        }

        inputFile >> a;
        cout << a << endl;

        inputFile.close();
        */
        
    //utility library PAIR
    pair<int, pair<int, int>>p  =  {2, {5, 6}};
    // cout << p.first << " " << p.second.first;

    //array of pair
    pair<int, int> pair_arr[] = {{1,2}, {4, 5}, {8,7}};
    cout << pair_arr[0].first;
    return 0;
}
