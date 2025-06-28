#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Naive Solution
/*
bool cycleDetection(ListNode* head){
    map<ListNode*, int> mpp;
    ListNode* temp = head;
    
    while(temp != NULL){
        if(mpp.find(temp) != mpp.end()){
            return true;
        }
        mpp[temp] = 1;
        temp = temp->next;
    }
    return false;
}
*/

// Opti SOl
bool cycleDetection(ListNode* head){

    ListNode* fast = head;
    ListNode* slow = head;
    
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            return true;
        }
    }

    return false;

    
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
    head1->next->next = new ListNode(3);
    cout << "Og linked list: ";
    printList(head1);

    cout << boolalpha << cycleDetection(head1);
    
    
    // Clean up memory (important to prevent memory leaks)
    ListNode* current = head1;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }
    
    return 0;
}