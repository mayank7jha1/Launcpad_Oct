#include<iostream>
#include<climits>
using  namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];

	for (int i = 0; i < n; i += 1) {
		cin >> a[i];
	}

	int Maxi = INT_MIN;
	for (int i = 0; i < n; i += 1) {
		if (a[i] > Maxi) {
			Maxi = a[i];
		}
	}

	int freq[Maxi + 1] = {0};

	//Iterate over the original array and
	//build the frequency array.

	for (int i = 0; i < n; i += 1) {
		// int Index=i;
		// int Element = a[i];
		// freq[Element] = freq[Element] + 1;

		freq[a[i]] = freq[a[i]] + 1;
	}

	//Print The Frequency Array.

	for (int i = 0; i < Maxi + 1; i += 1) {
		if (freq[i] > 0) {
			cout << "Element is " << i << " and Its Frequency is " <<
			     freq[i] << endl;
		}
	}
}










