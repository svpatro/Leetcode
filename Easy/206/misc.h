// Problem: Reversed Linked List
// Random Implementation

#include <iostream>

class Node{
public:
    int value;
    Node *next;

    Node(int val){
        value = val;
        next = NULL;
    }
};


class LinkedList{

public:

    Node *head;
    Node *tail;
    int size;

    LinkedList(){
        head = tail = NULL;
        size = 0;
    }
	Node *insertAtFront(int value) {
		Node *newNode = new Node(value);
		if (size == 0) {
			head = tail = newNode;
		} else {
			newNode->next = head;
			head = newNode;
		}
		size++;
		return newNode;
	}

	Node *insertAtEnd(int value) {
		Node *newNode = new Node(value);
		if (size == 0) {
			head = tail = newNode;
		} else {
			tail->next = newNode;
			tail = newNode;
		}
		size++;
		return newNode;
	}

	Node *getNodeAt(int pos) {
		if (pos < 0 || pos >= size) {
			std::cout << "No such position exists" << std::endl;
			return NULL;
		} else {
			Node *tmp = head;
			for (int i = 0; i < pos; i++)
				tmp = tmp->next;
			return tmp;
		}
	}

	void printList() {
		if (size == 0)
			std::cout << "[]" << std::endl;
		else {
			Node *tmp = head;
			std::cout << "[";
			for (int i = 0; i < size - 1; i++) {
				std::cout << tmp->value << " -> ";
				tmp = tmp->next;
			}
			std::cout << tail->value << "]" << std::endl;
		}
	}

    void reverse(){
		Node *prev = head;
		Node *current = head->next;

		while (current != NULL){
			Node *tmp = current->next;
			current->next = prev;
			prev = current;
			current = tmp;
		}
		Node *tmp = head;
		head = tail;
		tail = tmp;
		tail->next = NULL;
    }

	int getSize() {
		return size;
	}

};
