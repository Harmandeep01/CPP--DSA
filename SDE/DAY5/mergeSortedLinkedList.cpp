
#include<bits/stdc++.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
  if(list1 == NULL) return list2;
  if(list2 == NULL) return list1;

  if(list1->val > list2->val){
    ListNode* temp = list1;
    list1 = list2;
    list2 = temp;
  }

  ListNode* res = list1;

  while(list1 != NULL && list2 != NULL){
    ListNode* temp = NULL;
    while( list1 != NULL && list1->val <= list2->val){
      temp = list1;
      list1 = list1->next;
    }

    temp->next = list2;

    ListNode* tmp = list1;
    list1 = list2;
    list2 = tmp;
    
  }
  return res;
}
void printList(ListNode* head){
  while(head != nullptr){
    cout << head->val << " ";
    head = head->next;
    if(head == nullptr) cout << endl;
  }
}
int main(){

  ListNode* list1 = new ListNode(1);
  list1->next = new ListNode(2);
  list1->next->next = new ListNode(4);

  ListNode* list2 = new ListNode(1);
  list2->next = new ListNode(3);
  list2->next->next = new ListNode(4);
  
   ListNode* res = mergeTwoLists(list1, list2);
   printList(res);
  return 0;
}