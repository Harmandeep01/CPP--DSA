#include<bits/stdc++.h>

using namespace std;

//For Getting the elemets of Pascal Triangle
int nCr(int n, int r){
  n = n - 1;
  r = r - 1;
    int res = 1;
    for(int i = 0; i < r; i++){
      res = res * (n - i);
      res = res / (i + 1);
    }
  return res;

}

//Printing Entire row of Pascal Triangle (Extreme Brute Force)
//Time Compexity: O(n*r)
void printRowBruteForce(int n){
  for(int i = 1; i <= n; i++){
    cout << nCr(n , i) << " ";
  }
}

//Printing Entire row of Pascal Triangle (Optimal Solution)
vector<int> printRow(int n){
  vector<int> generateRow;
  int ans = 1;
  generateRow.push_back(1);
  for(int i = 1; i < n; i++){
    ans = ans * (n - i) / i;
    generateRow.push_back(ans);
  }
  return generateRow;
}

//Printing Entire Pascal Triangle
vector<vector<int>> printPascal(int n){
  vector<vector<int>> pascal;
  for(int i = 1; i <= n; i++){
      pascal.push_back(printRow(i));
  }
  return pascal;
}


int main(){
   vector<vector<int>> res =  printPascal(8);
  for(auto i : res){
    for(auto j : i){
      cout << j << " ";
    }
    cout << endl;
  }
  return 0;
}
