#include<iostream>
#include <vector>

using namespace std;

vector<int> lcmAndGcd(int a, int b) {
        int gcd = 0;
        int lcm = 0;
        int product = a * b;
        vector<int> result;
        while(a > 0 && b > 0){
            if(a > b) a = a % b;
            else b = b % a;
        }
        
        if(a == 0) gcd = b;
        else gcd = a;
        
        lcm = product / gcd;
        result.push_back(lcm);
        result.push_back(gcd);
        return result;
}

int main(){
    vector<int> result = lcmAndGcd(15, 20);
    for(auto i : result){
        cout << i << " ";
    }
    return 0;
}