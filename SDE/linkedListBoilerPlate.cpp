#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

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

    // Create the second linked list: 4 -> 5
    ListNode* head2 = new ListNode(4);
    head2->next = new ListNode(5);

    cout << "First linked list: ";
    printList(head1);

    cout << "Second linked list: ";
    printList(head2);

    // Clean up memory (important to prevent memory leaks)
    ListNode* current = head1;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }

    current = head2;
    while (current != nullptr) {
        ListNode* next = current->next;
        delete current;
        current = next;
    }

    return 0;
}