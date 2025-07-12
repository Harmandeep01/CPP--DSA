#include <bits/stdc++.h>
// #include <iostream>
#include <cmath>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool checkPalindrome(ListNode* head){
    int n = 0;
    stack<int> st;
    ListNode* temp = head;

    while(temp != NULL){
        n++;
        st.push(temp->val);
        temp = temp->next;
    }

    temp = head;
    while( temp !=NULL ){
        if(temp->val != st.top()){
        return false;
        }
        st.pop();         

        // Move to the next node
        // in the linked list
        temp = temp->next; 
    }
    
    return true;
  
}

void printList(ListNode* head) {
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    // Create the first linked list: 1 -> 2 -> 3
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(2);
    // head1->next->next = new ListNode(2);
    // head1->next->next->next = new ListNode(1);

    cout << "First linked list: ";
    printList(head1);

    cout << boolalpha << checkPalindrome(head1);
    
    // Clean up memory (important to prevent memory leaks)
    ListNode* current = head1;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}