#include<iostream>
using  namespace std;

void Merge(int* a, int s, int e) {
	int mid = (s + e) / 2;
	int i = s;
	int j = mid + 1;
	int temp[100];
	int k = s;

	while (i <= mid and j <= e) {
		if (a[i] < a[j]) {
			temp[k] = a[i];
			k += 1;
			i += 1;
		} else {
			temp[k] = a[j];
			k += 1;
			j += 1;
		}
	}

	while (i <= mid) {
		temp[k] = a[i];
		k += 1;
		i += 1;
	}

	while (j <= e) {
		temp[k] = a[j];
		k += 1;
		j += 1;
	}

	for (int i = s; i <= e; i += 1) {
		a[i] = temp[i];
	}

}


void MergeSort(int* a, int s, int e) {

	if (s >= e) {
		return;
	}

	int mid = (s + e) / 2;
	MergeSort(a, s, mid);
	MergeSort(a, mid + 1, e);

	Merge(a, s, e);
}

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}
	MergeSort(a, 0, n - 1);
	for (int i = 0; i < n; i += 1) {
		cout << a[i] << " ";
	}

}