#include<bits/stdc++.h>
using namespace std;

void markRow(vector<vector<int>>& matrix, int n, int i){
   for(int j = 0; j < n; j++){
     if(matrix[i][j] != 0){
       matrix[i][j] = -1;
     }
   }
}
void markCOl(vector<vector<int>>& matrix, int m, int j){
  for(int i = 0; i < m; i++){
     if(matrix[i][j] != 0){
       matrix[i][j] = -1;
     }
   }
}
void setZero(vector<vector<int>>& matrix, int m, int n){
  
  for(int i = 0; i < m; i++){
    for(int j = 0; j < m; j++){
      if(matrix[i][j] == 0){
        markRow(matrix,n, i);
        markCOl(matrix, m,j);
      }
    }
    cout << endl;
  }

  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
      if(matrix[i][j] == -1){
        matrix[i][j] = 0;
      }
    }
  }
}

int main(){

  vector<vector<int>> matrix = {{0, 1, 1}, {1, 1, 1}, {1, 1, 1}};
  int m = matrix.size();
  int n = matrix[0].size();
  
  setZero(matrix, m, n);

  for(auto i : matrix){
    for(auto j : i){
      cout << j << " ";
    }cout << endl;
  }
}
  