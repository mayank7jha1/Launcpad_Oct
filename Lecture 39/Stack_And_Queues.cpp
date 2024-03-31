#include<iostream>
#include<stack>
#include<queue>
using  namespace std;

int main() {
	//Container Adaptor:
	stack<int>st1;
	stack<int>st2 = st1;

	st1.push(10);
	st1.push(20);
	st1.push(30);
	st1.push(40);
	st1.push(50);
	st1.push(60);
	st1.push(70);
	st1.push(80);

	cout << st1.size() << endl;
	cout << st1.top() << endl;

	st1.pop();
	cout << st1.top() << endl;

	while (!st1.empty()) {

		int t = st1.top();
		cout << t << " ";
		st1.pop();

	}

	queue<int>q;
	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);
	q.push(60);
	q.push(70);
	q.push(80);


	cout << q.front() << endl;

	q.pop();

	cout << q.front() << endl;

	while (!q.empty()) {

		int t = q.front();
		cout << t << " ";
		q.pop();

	}

}






