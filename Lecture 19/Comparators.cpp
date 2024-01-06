#include<iostream>
#include<algorithm>
using  namespace std;

bool compare(int x, int y) {
	if (x > y) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int a[] = {1, 12, 3, 4, 19, 18};
	int n = 6;
	sort(a, a + n, compare);

	for (int i = 0; i < n; i += 1) {
		cout << a[i] << " ";
	}
}



