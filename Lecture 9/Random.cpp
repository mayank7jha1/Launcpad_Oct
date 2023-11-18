#include<iostream>
#include<bits/stdc++.h>
using  namespace std;

int main() {
	srand(time(0));

	int n = 10004 + rand() % 10005;
	cout << n << endl;
	set<long long>s;
	for (int i = 0; i < n; i++) {
		s.insert(10 + rand() % 100500);
	}

	for (auto x : s) {
		cout << x << " ";
	}
}