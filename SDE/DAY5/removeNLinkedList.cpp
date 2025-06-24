#include<bits/stdc++.h>

using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Naive Solution
/*
ListNode* removeNthFromEnd(ListNode* head, int n) { 
   ListNode* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt += 1;
        temp = temp->next;
    }

    if(cnt == n){
        ListNode* node = head;
        head = head->next;
        delete(node);
        return head; // <- this is necessary
    }
    
    int target = cnt - n;
    temp = head;
    cnt = 0;
   while(temp != nullptr){
       cnt++;
       if(cnt == target){
           ListNode* node = temp->next;
           temp->next = temp->next->next;
           delete(node);
       }
       temp = temp->next;
   }

    return head;
}
*/

//Optimal Solution
ListNode* removeNthFromEnd(ListNode* head, int n){
    ListNode* fast = head;
    ListNode* slow = head;

    for(int i = 0; i < n; i++){
        fast = fast->next;
    }

    //Edge case if n = size of list
    if(fast == NULL){
        head = head->next;
        return head;
    }

    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }

    ListNode* node = slow->next;
    slow->next = slow->next->next;
    delete(node);
    return head;
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
      list1->next->next = new ListNode(3);
     list1->next->next->next = new ListNode(4);
     list1->next->next->next->next = new ListNode(5);

    ListNode* newHead = removeNthFromEnd(list1, 1);
    
    printList(newHead);
    return 0;
}