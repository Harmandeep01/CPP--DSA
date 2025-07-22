#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

//Brute
/*
ListNode *detectCycle(ListNode *head) {
    map<ListNode*, int> mpp;
    ListNode* temp = head;

    while (temp != NULL && mpp.find(temp) == mpp.end()) {
        mpp[temp] = 1;
        temp = temp->next;
    }

    return temp; // Either the start of cycle, or NULL if no cycle
}
*/

//Better
ListNode* detectCycle(ListNode* head){
     if (!head || !head->next) return NULL;

    ListNode* slow = head;
    ListNode* fast = head;

    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;

       if(slow == fast){
           fast = head;
           while(fast != slow){
               slow = slow->next;
               fast = fast->next;
           }
           return fast;
       }
    }

    return NULL;
}
int main() {
    // Create the first linked list: 1 -> 2 -> 3
    ListNode* head1 = new ListNode(3);
    head1->next = new ListNode(2);
    head1->next->next = new ListNode(0);
    head1->next->next->next = new ListNode(4);
    head1->next->next->next->next = head1->next;


    ListNode* cycleNode = detectCycle(head1);
    if (cycleNode) {
        cout << "Cycle detected at node with value: " << cycleNode->val << endl;
    } else {
        cout << "No cycle detected." << endl;
    }



    return 0;
}