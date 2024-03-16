#include<iostream>
#include<vector>
#include<queue>
using  namespace std;

int main() {
	//Queue is based on FIFO.

	vector<int>v1;

	vector<int>v2{10, 2, 3, 49, 6};//Direct List Initialisation
	vector<int>v3 = {23, 45, 6, 7, 89};//Copy List Initialisation

	v2.pop_back();
	vector<int>v4 = v3;

	//Any Container can be created inside other
	//container.
	//Any Container can be passed through the function
	//also.


	queue<int>q1;
	queue<int>q2 = q1;

	q1.push(10);
	q1.push(2);
	q1.push(3);
	q1.push(49);
	q1.push(6);

	q1.pop();

	while (q1.empty() == 0) {
		cout << q1.front() << " ";
		q1.pop();
	}


}


//10 2 3 49 6
//2 3 49 6