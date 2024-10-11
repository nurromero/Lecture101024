
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



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
