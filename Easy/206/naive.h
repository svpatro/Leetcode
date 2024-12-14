// Problem: Reverse Linked List
// O(n) Solution

#include <iostream>
#include "ListNode.h"
 
class Naive {
public:
    ListNode* reverseList(ListNode* head) {

        if (head == NULL){
            return NULL;
        }
        if (head->next == NULL){
            return head;
        }

		ListNode *prev = head;
		ListNode *current = head->next;
        ListNode *tail;

		while (current != NULL){
			ListNode *tmp = current->next;
			current->next = prev;
			prev = current;
			current = tmp;
            tail = prev;
		}
		ListNode *newtmp = head;
		head = tail;
		tail = newtmp;
		tail->next = NULL;

        return head;

    }
};