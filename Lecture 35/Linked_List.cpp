#include<iostream>
using  namespace std;

class node {
public:
	int data;
	node *next;//Self Referencing Pointer

	//Default Constructor
	node() {

	}

	//Parameterised Constructor
	node(int x) {
		data = x;
		next = NULL;
	}
};

void InsertAtHead(node*&head, int d) {
	node *n = new node(d);
	// (*n).next = head;
	n->next = head;
	head = n;
}

int len(node* head) {
	int count = 0;
	while (head != NULL) {
		count++;
		head = head->next;
	}
	return count;
}

bool SearchIterative(node* head, int key) {

	while (head != NULL) {
		if (head->data == key) {
			return true;
		}
		head = head->next;
	}

	return false;
}


bool SearchRecursive(node* head, int key) {

	if (head == NULL) {
		return false;
	}

	if (head->data == key) {
		return true;
	} else {
		SearchRecursive(head->next, key);
	}
}

int midPoint1(node* head) {

	int length = len(head);
	length = length / 2;

	while (length > 0) {
		head = head->next;
		length -= 1;
	}

	return head->data;
}

//Second Mid Point in Even Linked List
int midPoint2(node* head) {

	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		// fast = fast->next;
		// fast = fast->next;
		fast = fast->next->next;
		slow = slow->next;
	}

	return slow->data;

}

//First Mid Point in Even Linked List
int midPoint3(node* head) {

	node* slow = head;
	node* fast = head->next;

	while (fast != NULL and fast->next != NULL) {
		// fast = fast->next;
		// fast = fast->next;
		fast = fast->next->next;
		slow = slow->next;
	}

	return slow->data;

}


void Cycle_Creation(node* head) {
	node* start = head;

	while (head->next != NULL) {
		head = head->next;
	}

	//head is at 90.
	head->next = start->next->next->next;
}

bool isCycle(node* head) {
	node* slow = head;
	node* fast = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;

		if (slow == fast) {
			return true;
		}
	}

	return false;
}

void break_cycle(node* head) {

	if (isCycle(head) == 0) {
		return;
	}

	node* fast = head;
	node* slow = head;

	while (fast != NULL and fast->next != NULL) {
		fast = fast->next->next;
		slow = slow->next;

		if (slow == fast) {
			break;
		}
	}

	//At this Point Fast and Slow is
	//at the Meeting Point and head is
	//at the start of Linked list.

	slow = head;
	node* prev = head;

	//Move Prev to one node before
	//Meeting Point i.e where fast is
	//at.

	while (prev->next != fast) {
		prev = prev->next;
	}

	//Slow is at Start of Linked list
	//fast is at the meeting point
	//prev is one step before fast.

	while (fast != slow) {
		fast = fast->next;
		slow = slow->next;
		prev = prev->next;
	}

	//Fast and Slow are at the origin of
	//cycle and prev is at the last node
	//of the linked list.

	prev->next = NULL;

}

void Print(node* head) {

	while (head != NULL) {
		cout << head->data << " --> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}



int main() {
	node* head = NULL;
	node* head1 = NULL;
	int n;
	cin >> n;
	for (int i = 0; i < n; i += 1) {
		int x;
		cin >> x;
		InsertAtHead(head, x);
	}

	Print(head);
	cout << len(head) << endl;
	cout << SearchIterative(head, 190) << endl;
	cout << SearchRecursive(head, 150) << endl;
	cout << midPoint1(head) << endl;
	cout << midPoint2(head) << endl;
	cout << midPoint3(head) << endl;

	cout << isCycle(head) << endl;
	Cycle_Creation(head);
	cout << isCycle(head) << endl;
	break_cycle(head);
	cout << isCycle(head) << endl;
}











