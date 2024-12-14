// Problem: Reverse Linked List
// O(n) Solution

#include <iostream>

struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
 
class Solution {
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