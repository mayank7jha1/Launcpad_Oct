#include<iostream>
using  namespace std;


int* Print(int* p, int n) {

	for (int i = 0; i < n; i += 1) {
		cout << p[i] << " ";
	}
	cout << endl;

	return p;
}



int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	int* ptr = Print(a, n);

	for (int i = 0; i < n; i++) {
		// cout << *(ptr + i) << " ";
		cout << ptr[i] << " ";
	}

}





