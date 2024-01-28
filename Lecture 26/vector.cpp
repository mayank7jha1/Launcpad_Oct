#include<iostream>
#include<vector>
#include<utility>
using  namespace std;

int main() {

	vector<int>v(5, 9);

	pair<int, double>p1, p2;

	cout << v.size() << endl;
	cout << v.capacity() << endl;

	v.push_back(20);
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	int n;
	cin >> n;

	for (int i = 0; i < n; i += 1) {
		int x;
		cin >> x;
		v.push_back(x);
		//cin >> v[i];
	}

	for (int i = 0; i < v.size(); i += 1) {
		cout << v[i] << " ";
	}

}










