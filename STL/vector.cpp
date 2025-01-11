#include <ios>
#include<iostream>
#include <iterator>
#include <vector>

using namespace std;

int main(){

    //vector of int datatype
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);



    //vector of PAIR DataType
    vector<pair<int, int>> vec;
    vec.emplace_back(1,2);
    


    //Pre defined vector
    vector<int>  preVec(5, 100); //5 ise size; 100 is value
    for(auto i : preVec){
        cout << i << endl;
    }cout << endl;


    //COPYing a vector
    vector<int> v2(v);
    cout << v2[0] << endl;


    //INSERT into vector

    vector<int> v3(v2); //1 2

    v3.insert(v3.begin() + 1 , 0); //inserting a single element
    v3.insert(v3.begin() + 2, 3, 4); //inserting multiple elements


    //INSERT vector<> into vector<>

    vector<int> copy(2, 50);
    v3.insert(v3.begin(), copy.begin(), copy.end());  /*// ---> INSERTS 50 50 from copy vector<> to the begin() of v3 vector<>;*/
    for(auto i : v3){
        cout<< i << " ";
    }cout << endl;



// <<<<<<<<<<------MISCELLENIOUS FUNCTIONS------------>>>>>>>>>>
    //Vector SIZE checking
    cout << "Size of vector v3 is " << v3.size() << endl;
    

    //SWAP
    // v3.swap(v2);


    //clear function -------> to empty or erase everythig inside the vector
    // v3.clear()


    //empty function -------> Boolean function if empty -> true if !empty-> false
    cout <<  boolalpha << v3.empty();


    
    return 0;
}