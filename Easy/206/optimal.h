// Problem: Reverse Linked List
// O(n) Solution

#include <iostream>
#include "ListNode.h"
 
class Optimal {
public:
    ListNode* reverseList(ListNode* head) {

        if (head == NULL){
            return NULL;
        }

        ListNode* newHead = head;
        if (head->next){
            newHead = reverseList(head->next);
            head->next->next = head;
            
        }
        head->next = NULL;

        return newHead;
    }
};