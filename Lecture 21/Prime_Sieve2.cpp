#include<iostream>
#include<algorithm>
using  namespace std;
const int N = 1e7 + 5;//10000005

/*
	Prime Array Representation:
	Prime[i]=0 This Means the current
	element is a Prime Number except
	for 0,1, and all the even numbers.

	Prime[i]=1 his Means the current
	element is a Composite Number.

*/
int Prime[N] = {0};

void Prime_Seive() {
	for (int i = 3; i * i <= N; i += 2) {
		if (Prime[i] == 0) {
			for (int j = i * i; j <= N; j += i) {
				Prime[j] = 1;
			}
		}
	}
}

void Print(int x) {
	cout << 2 << " ";
	for (int i = 3; i <= x; i += 2) {
		if (Prime[i] == 0) {
			cout << i << " ";
		}
	}
	cout << endl << endl;
}

/*
	::User Will Given You t numbers and
	  you have to print t times the prime numbers
	  upto a certain value.
*/

int main() {
	Prime_Seive();
	int t;
	cin >> t;

	while (t--) {
		int x;
		cin >> x;
		Print(x);
	}
}