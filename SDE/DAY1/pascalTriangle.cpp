#include <iostream>
#include <vector>

using namespace std;

vector<int> generateRow(int row){
  vector<int> res;
  res.push_back(1);
  int ans = 1;
  for(int col = 1; col < row; col++){
    ans = ans * (row - col);
    ans = ans / col;
    res.push_back(ans);
  }

  return res;
}

vector<vector<int>> pascalTriangle(int rows){
  vector<vector<int>> res;
  for(int i = 1; i <= rows; i++){
    res.push_back(generateRow(i));
  }
  return res;
}

int main() {
  vector<vector<int>> triangle = pascalTriangle(3);

  for(auto i : triangle){
    for(auto j : i){
      cout << j << " ";
    }cout << endl;
  }
}