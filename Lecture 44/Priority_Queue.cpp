#include<iostream>
#include<queue>
using  namespace std;

int main() {
	int n;
	cin >> n;

	queue<int>q;

	priority_queue<int>pq;//By Default it is Max Priority Queue/Max Heap
	priority_queue<int, vector<int>, greater<int>>pq1;//Min Heap

	for (int i = 0; i < n; i += 1) {
		int x;
		cin >> x;
		q.push(x);
		pq.push(x);//Heapify
		pq1.push(x);
	}

	while (!q.empty()) {
		int f = q.front();
		cout << f << " ";
		q.pop();
	}

	cout << endl;

	while (!pq.empty()) {
		int t = pq.top();
		cout << t << " ";
		pq.pop();//Heapify
	}
	cout << endl;


	while (!pq1.empty()) {
		int t = pq1.top();
		cout << t << " ";
		pq1.pop();//Heapify
	}
	cout << endl;

	//Array ko desc. Order me sort.
	//sort(a, a + n, greater<int>());

}













