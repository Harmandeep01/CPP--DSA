#include <bits/stdc++.h>

using namespace std;

// Brute force
/*
void setRow(int i, vector<vector<int>>& matrix) {
    int n = matrix[0].size();
        for(int j = 0; j < n; j++){
            if(matrix[i][j] != 0) matrix[i][j] = -1;
        }
    }
void setColumn(int j, vector<vector<int>>& matrix) {
    int m = matrix.size();
    for(int i = 0; i < m; i++){
            if(matrix[i][j] != 0) matrix[i][j] = -1;
        }
    }
void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    cout << "Original Matrix:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
          if(matrix[i][j] == 0){
              setRow(i, matrix);
              setColumn(j, matrix);
          }
        }
    }

     for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
          if(matrix[i][j] == -1){
              matrix[i][j] = 0;
          }
        }
    }

    cout << "Modified Matrix:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}
*/

// Better Solution
/*void setZeroes(vector<vector<int>>& matrix) {
         int n = matrix.size();
        int m = matrix[0].size();
      vector<int> rowTrack(n, 0);
        vector<int> colTrack(m, 0);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    rowTrack[i] = 1;
                    colTrack[j] = 1;
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(rowTrack[i] || colTrack[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
*/

// Optimal Solution

void setZeroes(vector<vector<int>> &matrix) {
  int m = matrix.size();
  int n = matrix[0].size();
  int col0 = 1;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (matrix[i][j] == 0) {

        matrix[i][0] = 0;

        if (j != 0) {
          matrix[0][j] = 0;
        } else {
          col0 = 0;
        }
      }
    }
  }

  for (int i = 1; i < m; i++) {
    for (int j = 1; j < n; j++) {
      if (matrix[i][j] != 0) {
        if (matrix[i][0] == 0 || matrix[0][j] == 0) {
          matrix[i][j] = 0;
        }
      }
    }
  }

  if (matrix[0][0] == 0) {
    for (int i = 0; i < n; i++) {
      matrix[0][i] = 0;
    }
  }

  if (col0 == 0) {
    for (int i = 0; i < m; i++) {
      matrix[i][0] = 0;
    }
  }
}

int main() {

  vector<vector<int>> arr = {
      {1, 1, 1, 1}, {1, 0, 1, 1}, {1, 1, 0, 1}, {0, 1, 1, 1}};
  setZeroes(arr);
  for (auto n : arr) {
    for (auto m : n) {
      cout << m << " ";
    }
    cout << endl;
  }

  return 0;
}