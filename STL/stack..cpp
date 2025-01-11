#include<bits/stdc++.h>
#include <deque>
#include <stack>
using namespace std;

int main() {
   
    stack<int> st;

    //Only these functions re available in stack
    // push, pop, top, empty, emplace, swap, size
    //no INDEXing is allowed



    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.emplace(5);

    cout << st.top() << endl;
    st.pop(); //removes 5

    cout << st.top() << endl; // Now top becoomes 4; therefore prints 4
    
    
    cout << st.size() << endl;


    cout << boolalpha << st.empty() << endl;


    stack<int> st2, st3;    // st2 and st3 are new stacks (empty; as there is not data is added);
    st2.swap(st3);      //swapped st2 with st3


    return 0;
}
