#include<iostream>
#include<vector>
using  namespace std;

int main() {
	vector<int>v1;
	vector<int>v2(5);

	int n;
	cin >> n;

	for (int i = 0; i < n; i += 1) {
		int x;
		cin >> x;
		v1.push_back(x);
	}

	//First Way To Iterate a Vector :
	//Using For Loop:

	cout << "First Vector " << endl;
	for (int i = 0; i < v1.size(); i += 1) {
		cout << v1[i] << " ";
	}
	cout << endl;
	cout << "<-----------------> " << endl;

	for (int i = 0; i < n; i += 1) {
		cin >> v2[i];
	}

	cout << "Second Vector " << endl;
	for (int i = 0; i < n; i += 1) {
		cout << v2[i] << " ";
	}
	cout << endl;
	cout << "<-----------------> " << endl;


	//Iterating over a vector using a iterator
	//You have to define a iterator of the vector
	//library

	// auto it = v1.begin();

	//vector<int>::iterator it = v1.begin();

	for (auto it = v1.begin(); it != v1.end(); it += 1) {
		cout << *(it) << " ";

	}
	cout << endl;

	//Iterating over a vector using foreach Loop:

	//for every element i.e inside this container/derived
	//data type do this random task.

	for (int x : v1) {
		//TasK:
		cout << x << " ";
	}


	/*
		For Every Element that is inside this container
		name v1 it is going to be represented as
		x one by one and for this do the task.
	*/
}











