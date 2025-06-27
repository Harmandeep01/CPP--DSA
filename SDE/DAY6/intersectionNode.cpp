#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// vrute Force
/*
ListNode* intersectionPresent(ListNode* head1,ListNode* head2) {
    while(head2 != NULL) {
        ListNode* temp = head1;
        while(temp != NULL) {
            //if both nodes are same
            if(temp == head2) return temp;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    //intersection is not present between the lists return null
    return NULL;
}
*/

// Better
/*
ListNode* intersectionPresent(ListNode* head1,ListNode* head2) {
    set<ListNode*> st;

    while(head1 != NULL){
        st.insert(head1);
        head1 = head1->next;
    }

    while(head2 != NULL){
        if(st.find(head2) != st.end()){
            return head2;
        }
        head2 = head2->next;
    }

    return NULL;
}
*/

// Difference in length
/*
int getDifference(ListNode* head1,ListNode* head2){
    int a = 0;
    int b = 0;
    while(head1 != NULL){
        a++;
        head1 = head1->next;
    }

    while(head2 != NULL){
        b++;
        head2 = head2->next;
    }

    return (a - b);
}
ListNode* intersectionPresent(ListNode* head1,ListNode* head2){
    int diff = getDifference(head1, head2);

    if(diff < 0){
        while(diff++ != 0) head2 = head2->next;
    }
    else{
        while(diff-- != 0) head1 = head1->next;
    }

    while(head1 != NULL){
        if(head1 == head2) return head1;
        head1 = head1->next;
        head2 = head2->next;
    }
    return NULL;
}
*/

// Optimal Solution
ListNode* intersectionPresent(ListNode* h1,ListNode* h2){
    ListNode* dummy1 = h1;
    ListNode* dummy2 = h2;
    
    while(dummy1 != dummy2){
        dummy1 = dummy1 == NULL ? h2 : dummy1->next;
        dummy2 = dummy2 == NULL ? h1 : dummy2->next;
    }

    return dummy1;
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
    // First linked list: 1 -> 3 -> 1 -> [2 -> 4]
    ListNode* head1 = new ListNode(1);
    head1->next = new ListNode(3);
    head1->next->next = new ListNode(1);
    head1->next->next->next = new ListNode(2);
    head1->next->next->next->next = new ListNode(4);

    
    ListNode* secHead = new ListNode(3);
    secHead->next =  head1->next->next->next;
    ListNode* head2 = secHead;
    
    cout << "First linked list: ";
    printList(head1);

    cout << "Second linked list: ";
    printList(head2);

    ListNode* answerNode = intersectionPresent(head1, head2);
    if (answerNode == NULL)
        cout << "No intersection\n";
    else
        cout << "The intersection point is " << answerNode->val << endl;

    return 0;
}
