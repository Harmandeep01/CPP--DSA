#include<bits/stdc++.h>

using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
  ListNode* dummy = new ListNode();
  ListNode* temp = dummy;
  int carry = 0;
  
  while(carry || l1 != NULL || l2 != NULL){
      int sum = 0;
  
      if(l1 != NULL && l1->val <= 100){
          sum += l1->val;
          l1 = l1->next;
      }
      if(l2 != NULL && l2->val <= 100){
          sum += l2->val;
          l2 = l2->next;
      }
  
      sum += carry;
      carry = sum / 10;
  
      ListNode* node = new ListNode(sum % 10);
      temp->next = node;
      temp = temp->next;
  }
  return dummy->next;
}
void printList(ListNode* head){
  while(head != nullptr){
    cout << head->val << " ";
    head = head->next;
    if(head == nullptr) cout << endl;
  }
}

int main(){
  ListNode* list1 = new ListNode(2);
  list1->next = new ListNode(4);
  list1->next->next = new ListNode(3);

  ListNode* list2 = new ListNode(5);
  list2->next = new ListNode(6);
  list2->next->next = new ListNode(4);

   ListNode* res = addTwoNumbers(list1, list2);
   printList(res);
}