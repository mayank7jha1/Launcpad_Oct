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
}











