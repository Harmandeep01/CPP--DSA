#include<bits/stdc++.h>
using namespace std;

void setZero(vector<vector<int>>& matrix, int m, int n){
  int col0 = 1;
  for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
     if(matrix[i][j] == 0){
       //row
       matrix[i][0] = 0;

       //col
       if(j != 0){
         matrix[0][j] = 0;
       }else{
         col0 = 0;
       }
     }
    }
  }

  for(int i = 1; i < m; i++){
    for(int j = 1; j < n; j++){
      if(matrix[i][j] != 0){
        if(matrix[i][0] == 0 || matrix[0][j] == 0){
          matrix[i][j] = 0;
        }
      }
    }
  }

  if(matrix[0][0] == 0){
    for(int i = 0; i < n; i++){
      matrix[0][i] = 0;
    }
  }

  if(col0 == 0){
    for(int i = 0; i < n; i++){
      matrix[i][0] = 0;
    }
  }
  
}

int main(){

  vector<vector<int>> matrix = {{1,1,1,1}, {1,0,1,1}, {1,1,0,1}, {0,1,1,1}};
  int m = matrix.size();
  int n = matrix[0].size();

  setZero(matrix, m, n);

  for(auto i : matrix){
    for(auto j : i){
      cout << j << " ";
    }cout << endl;
  }
}
