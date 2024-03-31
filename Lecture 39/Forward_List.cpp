#include<iostream>
#include<forward_list>
#include<vector>
#include<list>
using  namespace std;

int main() {


	forward_list<int>f;
	forward_list<int>f1 = f;
	forward_list<int>f2{1, 2, 3, 4, 5};
	forward_list<int>f3 = {1, 2, 3, 4, 5};

	//This is a Singly Linked List.
	//In Singly Linked List we can only insert from front.
	//i.e. from head.

	//Data Internally is stored Linked List Only.
	forward_list<int>g1;

	g1.push_front(10);
	g1.push_front(20);
	g1.push_front(30);

	cout << g1.front() << endl;


	list<int>l;

	l.push_front(30);
	l.push_front(50);
	l.push_front(150);
	l.push_front(1150);
	l.push_front(11150);
	l.push_front(111150);
	l.push_front(1111150);
	l.push_back(90);

	l.pop_back();
	l.pop_front();

	cout << l.front() << endl;
	cout << l.back() << endl;


	//Arrays of Vectors:

	vector<int>gr[10];
	// vector<vector<int>>b(n);

	// cin>>gr[i].push_back(x);

	for (int x : l) {
		cout << x << " ";
	}


	for (list<int>::iterator it = l.begin(); it != l.end(); it++) {
		cout << (*it) << " ";
	}
}







