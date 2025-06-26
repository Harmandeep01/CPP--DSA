#include<bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void deleteNode(ListNode* node) {

    // ListNode* temp = node;
    node->val = node->next->val;
    // temp = node;
   node->next = node->next->next;
    
}
void printList(ListNode* head){
  while(head != nullptr){
    cout << head->val << " ";
    head = head->next;
    if(head == nullptr) cout << endl;
  }
}

int main(){
  ListNode* list1 = new ListNode(4);
  list1->next = new ListNode(5);
  list1->next->next = new ListNode(1);
  list1->next->next->next = new ListNode(9);

    ListNode* node = list1->next;
    

   deleteNode(node);
   printList(list1);
}