#include<bits/stdc++.h>

using namespace std;


void rotateMatrix(vector<vector<int>>& matrix){
    int n = matrix.size();
    
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    
    for(auto& row : matrix){
        reverse(row.begin(), row.end());
    }
}


int main(){
    
    vector<vector<int>> matrix = {{5,1,9,11}, {2,4,8,10}, {13,3,6,7}, {15,14,12,16}};

    rotateMatrix(matrix);
    for(auto i : matrix){
      for(auto j : i){
          if(j > 9){
              cout << j << " ";
          }else{
          cout << j << "  ";
               
          }
            }   cout << endl;
      }
    
    return 0;
}