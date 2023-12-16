#include<iostream>
using  namespace std;
const int n1 = 50;
int b[n1];
#define n2 1000


int Sum(int (*a), int n) {

	int sum = 0;
	for (int i = 0; i < n; i += 1) {
		sum += a[i];
	}

	return sum;
}

const int n = 3, m = 3;

int Sum2(int a1[n][m], int n, int m) {

	int sum = 0;
	for (int i = 0; i < n; i += 1) {
		for (int j = 0; j < m; j += 1) {
			sum += a1[i][j];
		}
	}

	return sum;

}

int main() {

	//m = 40;
	int x;
	cin >> x;

	int c[x];

	int a[] = {1, 2, 3, 4, 5};
	int n = 5;

	cout << Sum(a, n) << endl;

	int a1[][3] = {{1, 2, 3}, {2, 3, 4}, {3, 4, 5}};

	int t = 3;
	int m = 3;
	cout << Sum2(a1, t, m);

}






