#include <iostream>
#include <vector>

using namespace std;

//Brute Force
/* bool searchMatrix(vector<vector<int>>& matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();
    bool found = false;
    for(int i = 0; i < n; i++){
        if(target >= matrix[i][0] && target <= matrix[i][m-1]){
            for(int j = 0; j < m; j++){
                if(target == matrix[i][j]){
                    found = true;
                }
            }
        }
}
return found;
}
*/

//Optimal Solution
/*
    Time Complexity: O(log (n*m) )
    Space Complexity: O(1);
*/
bool searchMatrix(vector<vector<int>>& matrix, int target){
    int n = matrix.size();
    int m = matrix[0].size();

    int low = 0;
    int high = (n * m) - 1;

    while(low <= high){
        int mid = (low + high) / 2;

        int row = (mid / m);
        int col = (mid % m);
        if(matrix[row][col] == target){
           return true;
        }
        else if(target < matrix[row][col]){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {
        {1,   3,  5,  7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };
    int target = 21;
    bool result = searchMatrix(matrix, target);
    cout << (result ? "true" : "false") << endl; // Output: false

    return 0;
}