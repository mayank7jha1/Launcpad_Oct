#include<iostream>
#include<bits/stdc++.h>
using  namespace std;


//Singly Linked List.
class node {
public:
	int data;
	node* next;
};

//Doubly Linked List
class node1 {
public:
	int data;
	node1* next;
	node1* prev;
};



int main() {
	/*
		STL:
		1. Containers
		2. Iterators
		3. Functors
		4. Algorithms

		Sequence Containers:

		Vectors,Pair,forward_list
	*/

	//Sequence Containers:

	//Declaration and Initialisation
	vector<int>v1;
	vector <int>v2(10);//size
	vector<int>v3{1, 2, 3, 4, 5};
	vector<int>v4 = {2, 3, 4, 5, 6};
	vector<int>v5 = v1;


	pair<int, int>p1;
	pair<int, int>p2{1, 2};
	pair<int, int>p3 = {3, 4};
	pair<int, int>p4 = make_pair(5, 6);
	pair<int, int>p5 = p1;

	forward_list<int>f1;
	forward_list<int>f2(10);//size
	forward_list<int>f3{1, 2, 3, 4, 5};
	forward_list<int>f5 = {3, 4, 5, 6};
	forward_list<int>f6 = f1;

	list<int>l1;
	list<int>l2(10);
	list<int>l3{1, 2, 2, 3, 5};
	list<int>l4 = {1, 2, 3, 4, 5, 6};
	list<int>l6 = l1;


	//Insert and Remove.

	v1.push_back(100);//O(1)
	v1.push_back(200);//O(1)

	cout << v1[0] << endl;
	// v1.pop_front();//Not Allowed.
	v1.pop_back();//O(1)

	//Algorithms Based on Vectors.

	sort(v1.begin(), v1.end());
	reverse(v1.begin(), v1.end());

	// lower_bound(v1.begin(), v1.end(), 2)
	// - v1.begin();

	// upper_bound(v1.begin(), v1.end(), 3)
	// - v1.begin();

	//Vector Iteration:

	//For Loop
	//For Each Loop
	//Iterators

	for (int i = 0; i < v1.size(); i += 1) {
		cout << v1[i] << " ";
	}
	cout << endl;

	//For Every Element.
	for (int x : v1) {
		cout << x << " ";
	}
	cout << endl;

	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;


	//Pair : Utility Class.

	//Forward_List: Singly LL.

	//Insertion and Deletion:

	f1.push_front(100);//O(1)
	f1.push_front(200);//O(1)

	f1.pop_front();//O(1)

	//For Every Element.
	for (int x : f2) {
		cout << x << " ";
	}
	cout << endl;

	for (forward_list<int>::iterator it = f1.begin(); it != f1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//Insertion and Removal : Doubly Linked List

	l1.push_back(1000);
	l1.push_front(20000);
	l1.push_front(321);
	l1.push_back(3456);

	l1.pop_front();
	l1.pop_back();


	//For Every Element.
	for (int x : l2) {
		cout << x << " ";
	}
	cout << endl;

	for (list<int>::iterator it = l1.begin(); it != l1.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

	//Any container can be returned and passed by
	//passed by value inside a function.

	//vector<vector<int>>v;
	//vector<int>gr[100];
	// vector<pair<int,int>>p1;
	//list<vector<int>>l1;

	//Container Adaptors:

	//In Reversal Problems and Multiple Comparison
	stack<int>s1;
	stack<int>s2 = s1;

	while (!s2.empty()) {
		int top1 = s2.top();
		s2.pop();
	}


	queue<int>q1;
	queue<int>q2 = q1;

	//Adhoc Problem and Operating System.

	while (!q2.empty()) {
		int top1 = q2.top();
		q2.pop();
	}

}










