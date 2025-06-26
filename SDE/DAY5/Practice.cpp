#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// ListNode* addTwo(ListNode* l1, ListNode* l2){

//     ListNode* temp = new ListNode();
//     ListNode* dummy = temp;
//     int carry = 0;
    
//     while(carry || l1 != NULL || l2 != NULL){
//         int sum = 0;
//         if(l1 != NULL){
//             sum += l1->val;
//             l1 = l1->next;
//         }
//         if(l2 != NULL){
//             sum += l2->val;
//             l2 = l2->next;
//         }

//         sum += carry;

//         temp->next = new ListNode(sum % 10);
//         temp = temp->next;

//         carry = sum/10;
//     }
//     return dummy->next;
// }
void deleteNode(ListNode* node){
    node->val = node->next->val;
    node->next = node->next->next;
}
void printList(ListNode* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }cout << endl;
}

int main(){

    ListNode* list1 = new ListNode(2);
    list1->next = new ListNode(4);
    list1->next->next = new ListNode(3);

    ListNode* list2 = new ListNode(5);
    list2->next = new ListNode(6);
    list2->next->next = new ListNode(4);
    list2->next->next->next = new ListNode(2);
    printList(list1);
    printList(list2);

    // ListNode* res = addTwo(list1, list2);
    ListNode* node = list2->next;
    deleteNode(node);
    printList(list2);
    
    return 0;
}