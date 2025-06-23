#include <iostream>
using namespace std;


struct ListNode {
     int val;
    ListNode *next;
     // ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
    // ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

//Normal Solution
ListNode* reverseList(ListNode* head){
    ListNode* prev = NULL;
    ListNode* temp = head;

    while(temp != NULL){
        ListNode* front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}

//Recursive Solution
/*
ListNode* reverseList(ListNode* head) {
    if(head == nullptr || head->next == nullptr) return head;

    ListNode* newHead = reverseList(head->next);
    ListNode* front = head->next;
    front->next = head;
    head->next = nullptr;
    
    return newHead;
}
*/

ListNode* findMid(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head;

    while( fast != nullptr && fast->next != nullptr ){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

void printList(ListNode* head) {
    while (head != nullptr) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

// Example usage
int main() {
    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    head->next->next->next->next->next = new ListNode(6);
    head->next->next->next->next->next->next = new ListNode(7);
    head->next->next->next->next->next->next->next = new ListNode(8);
    cout << "Original List ";
    printList(head);
    cout << "\nReverse Element ";
     ListNode* reverse = reverseList(head);
    printList(reverse);
    
    //cout << "Middle Element ";
    // cout << middle->val;

    return 0;
}
