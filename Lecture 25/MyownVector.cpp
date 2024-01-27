#include<iostream>
#include"Vector.h"
using  namespace std;

int main() {
	Vector<double>v;
	int n;
	cin >> n;
	for (int i = 0; i < n; i += 1) {
		char x;
		cin >> x;
		v.push_back(x);
	}

	for (int i = 0; i < v.size(); i += 1) {
		cout << v[i] << " ";
	}
	cout << endl;

	cout << v.front() << endl;
	cout << v.back() << endl;

	v.pop_back();

	for (int i = 0; i < v.size(); i += 1) {
		cout << v[i] << " ";
	}
	cout << endl;
	cout << v.capacity() << endl;

}