#include<iostream>
using  namespace std;
const int N = 1e6 + 10;

int a[N] = {0}, b[N] = {0}, c[N] = {0}, d[N] = {0}, e[N] = {0};
int main() {
	for (int i = 0; i < N; i++) {
		a[i] = i;
	}
	for (int i = 0; i < N; i++) {
		a[i] = i;
	}
	for (int i = 0; i < N; i++) {
		b[i] = i;
	}
	for (int i = 0; i < N; i++) {
		c[i] = i;
	}
	for (int i = 0; i < N; i++) {
		d[i] = i;
	}
	for (int i = 0; i < N; i++) {
		e[i] = i;
	}

	for (auto x : a) {
		cout << x << " ";
	}

	for (auto x : b) {
		cout << x << " ";
	}

	for (auto x : c) {
		cout << x << " ";
	}
	for (auto x : d) {
		cout << x << " ";
	}

	for (auto x : e) {
		cout << x << " ";
	}

}