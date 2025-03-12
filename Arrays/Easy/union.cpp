#include<bits/stdc++.h>
#include <vector>

using namespace std;
vector<int> unionsFunction(vector<int>& a, vector<int> b){
        int i = 0;
        int j = 0;
        
        vector<int> unions;
       
        
        while(i < a.size() && j < b.size()){
            if(a[i] <= b[j]){
                if(unions.size() == 0 || unions.back() != a[i]){
                    unions.push_back(a[i]);
                }
                i++;
            }else{
                if(unions.size() == 0 || unions.back() != b[j]){
                    unions.push_back(b[j]);
                }
                    j++;
            }
        }
        
        while(i < a.size()){
            if(unions.size() == 0 || unions.back() != a[i]){
                unions.push_back(a[i]);
                i++;
            }
        }
        while(j < b.size()){
            if(unions.size() == 0 || unions.back() != b[j]){
                unions.push_back(b[j]);
                j++;
            }
        }
            
        return unions;
}
int main(){


    vector<int>a = {1, 2, 3, 3, 4};
    vector<int> b = {1, 1, 2, 2, 6};


    vector<int> unionRes = unionsFunction(a, b);

    for(auto i : unionRes){
        cout << i << " ";
    }cout << endl;



    return 0;
}