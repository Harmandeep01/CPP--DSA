
// #include <bits/stdc++.h>

// using namespace std;

// //Brute Force

// //OPtimal
// vector<vector<int>> mergeOverlappingIntervals(vector<vector<int>>& intervals){
//     int n = intervals.size();
    
//     sort(intervals.begin(), intervals.end());
    
//     vector<vector<int>> ans;
    
//     for(int i = 0; i < n; i++){
//         if(ans.empty() || ans.back()[1] < intervals[i][0]){
//             ans.push_back(intervals[i]);
//         }else{
//             ans.back()[1] = max(ans.back()[1], intervals[i][1]);
//         }
//     }
    
//     return ans;
// }

// int main()
// {
//     vector<vector<int>> nums = {{1,3},{2,6},{8,10},{15,18}};
//     vector<vector<int>> res = mergeOverlappingIntervals(nums); 
    
//     for(auto x : res ){
//         for(auto y : x){
//             cout << y << " ";
//         }cout << endl;
//     }

//     return 0;
// }