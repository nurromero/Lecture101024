
#include <iostream>

struct Node { 
	int data;
	Node* next;
};


// Creating a temporary pointer, called tmpHead, to point to the head of the linked list
void initNode(Node *tmpHead, int n) {
	tmpHead->data = n;
	tmpHead->next = NULL;
}


void addNode(Node* cur, int n) {
	while (cur->next != NULL) {
		cur = cur->next;
	}
	Node* newNode = new Node;
	newNode->data = n;
	newNode->next = NULL;
	cur -> next = newNode;

}

void displayList(Node *cur) {
	while (cur != NULL) {
		std::cout << cur->data;
		cur = cur->next;
	}
}

// Double pointer
void addFront(Node** tmpHead, int n) {
	Node *newNode = new Node;
	newNode->data = n;
	newNode->next = *tmpHead;
	*tmpHead = newNode;

}

int main()
{
	Node* head = new Node;
	initNode(head, 22);
	addNode(head, 33);
	addNode(head, 44);
	displayList(head);
	addFront(&head, 11);
	displayList(head);

	return 0;
}


