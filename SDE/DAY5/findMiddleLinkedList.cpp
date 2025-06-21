#include<bits/stdc++.h>

using namespace std;
 struct ListNode {
     int val;
    ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

//Navie
/*
ListNode* findMiddle(ListNode* head){
    ListNode* temp = head;
    int cnt = 0;
    while(temp != nullptr){
        cnt++;
        temp = temp->next;
    }

    temp = head;
    int mid = (cnt/2) + 1;
    while(temp != nullptr){
        mid--;
        if(mid == 0){
            break;
        }
        temp = temp->next;
    }
    return temp;
}
*/

//Optimal Solution
ListNode* findMiddle(ListNode* head){
    ListNode* fast = head;
    ListNode* slow = head;

    while(fast != nullptr && fast->next != nullptr){
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

int main(){

    ListNode* head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    cout << "Original List ";
    printList(head);

    cout << "Middle ";
    ListNode* middle = findMiddle(head);
    cout << middle->val;
    return 0;
}