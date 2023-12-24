#include<iostream>
using  namespace std;

void reverse(int *a, int S_Index, int E_Index) {

	for (int i = S_Index, j = E_Index; i < j; i += 1, j -= 1) {
		swap(a[i], a[j]);
	}

}

int main() {

	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int k;
	cin >> k;

	k = k % n;

	//Rotate k times left:
	//Steps:
	//1. First Reverse upto (0) - (k-1) Index.
	//2. Then Reverse from k index to n-1 Index.
	//3. Then Reverse the entire array from 0 - n-1 Index.

	reverse(a, 0, k - 1);
	reverse(a, k, n - 1);
	reverse(a, 0, n - 1);

	for (int i = 0; i < n; i += 1) {
		cout << a[i] << " ";
	}

	//Rotate k times right:
	//Steps:
	//1. First Reverse upto (0) - (n-k-1) Index.
	//2. Then Reverse from n-k index to n-1 Index.
	//3. Then Reverse the entire array from 0 - n-1 Index.
	cout << endl;
	int b[n];
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	reverse(b, 0, n - k - 1);
	reverse(b, n - k, n - 1);
	reverse(b, 0, n - 1);

	for (int i = 0; i < n; i += 1) {
		cout << b[i] << " ";
	}
}







